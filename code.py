import pandas as pd
import hashlib
import base64

#周凌涛
# 读取xlsx表格

df = pd.read_excel("E:/1.xlsx")

letters = {}  # 存储已经占用的字母

for data in df.values:
    f = True
    print(data)
    # 对每个数据进行sha256哈希
    hashed_data = hashlib.sha256(str(data).encode('utf-8')).digest()

    # 对哈希结果进行base64编码
    encoded_data = base64.b64encode(hashed_data).decode('utf-8')

    # 从前往后遍历编码后的字符串
    for letter in encoded_data:
        if letter.isalpha() and letter.lower() != 'z' and letter.lower() not in letters:
            # 如果该字母未被占用，则将其分配给当前数据
            letters[letter.lower()] = str(data)
            f = False
            break
    while f:
        hashed_data = hashlib.sha256(hashed_data).digest()
        encoded_data = base64.b64encode(hashed_data).decode('utf-8')
        for letter in encoded_data:
            if letter.isalpha() and letter.lower() != 'z' and letter.lower() not in letters:
                letters[letter.lower()] = str(data)
                break
# 定义存储数据的空列表
#zhoulingtao
keys = []
values = []
# 循环遍历字典
for key, vals in letters.items():
    # 将键和值分别取出
    label = key
    key = str(key)
    num = ord(label) - ord('a') + 1
    keys.append(num)
    values.append(vals)

# 定义 DataFrame 对象并输出到 Excel 文件
df = pd.DataFrame({'学号': values,'编码': keys})
writer = pd.ExcelWriter('E:/output.xlsx', engine='xlsxwriter')
df.to_excel(writer, sheet_name='Sheet1', index=False)
writer.close()


