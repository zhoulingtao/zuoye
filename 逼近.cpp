#include <stdio.h>
int main(){
   double a;
   printf("please enter the number£¡\n");
   int b,c[10],m=1,i,d=1,p=1;
    scanf("%lf",&a);
    b=(int)a;
	while(b!=a)
		{a*=10;
		if (b==0)
			printf("%-5d",0);
		b=(int)a;
		};
	i=1;
	while (i*10<b)
		{i*=10;
		d+=1;}
	for (p=1;p<=d;p++)
		{c[p]=0;
		while(c[p]<b/i)
		   c[p]++;
		b=b-c[p]*i;
		i/=10;
		printf("%-5d",c[p]);}
	return 0;
}
