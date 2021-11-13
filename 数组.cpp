#include <stdio.h>
int main(){
	char b[10]={'q'};
	printf("please enter a number!\n");
   int i=1;
     scanf("%c",&b[1]);
	while(((b[i]>='0')&&(b[i]<='9'))||(b[i]='.'))
	{if(b[i]!='.')
	printf("%-5c",b[i]);
	++i; 
	scanf("%c",&b[i]);}
    return 0;
}
