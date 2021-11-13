#include <stdio.h>
int main(){
   double a;
   int b,c[10],i;
    printf("ÇëÊäÈëÊý×Ö£¡\n");
    scanf("%lf",&a);
    b=(int)a;
	while(b!=a)
		{a*=10;
		if (b==0)
			printf("%-5d",0);
		b=(int)a;
		};
	i=1;
	while(b!=0)
		{c[i]=b%10;
	    b=(b-c[i])/10;
		i++;}
	i-=1;
	for(;i>=1;--i)
      		printf("%-5d",c[i]);	
    return 0;
}
