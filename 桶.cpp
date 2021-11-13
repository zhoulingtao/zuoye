#include <stdio.h>
int main(){
   double a;
    printf("ÇëÊäÈëÊý×Ö£¡\n");
   int b,c[10][10]={0},d[10]={0},i,m=1,j,n,p;
    scanf("%lf",&a);
    b=(int)a;
	while(b!=a)
		{a*=10;
		if (b==0)
			printf("%-5d",b);
		b=(int)a;
		};
	while(b!=0)
		{p=b%10;
		d[p]=d[p]+1;
		c[p][d[p]]=m;
		m=m+1;
		b=b/10;}
	for(i=m;i>=1;--i)
		for(j=0;j<10;j++)
			for(n=0;n<10;n++)
			if(c[n][j]==i)
				{printf("%-5d",n);
				n=j=11;}
    return 0;
}
