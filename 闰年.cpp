#include <stdio.h>
bool runnain (int m);
int main(){
   double a;
   int b,c,i;
   printf("please enter a year£¡\n");
   printf("Please do not use decimal points \n");
   printf("Please indicate the year before the Christian era as a negative number£¡\n");
   scanf("%lf",&a); 
   b=(int)a;
   if (b!=a ||b==0)
		 printf("please enter a right number of year£¡\n");
   else
		{if (b<0)
		     b=b+1;
	     if (runnain(b))
			 printf("%d is a leap year\n",b>0?b:b-1);
	     else 
			 printf("%d isn't a leap year\n",b>0?b:b-1);
		 printf("If you want to get all the leap years between two years, please enter another year!\n");
		 scanf("%d",&c);
		 if (c!=(int)c ||c==0)
			 printf("please enter a right number of year£¡\n");
		 if (c<0)
		     c=c+1;
		 for (i=(b>=c?c:b);i<=(b>=c?b:c);i++)
			{if (runnain(i))
				printf("%d\t",i>0?i:i-1);}}
 return 0;}
bool runnain(int m) {
	bool s;
	if ((m%4==0)&&(m%100!=0)||((m%400==0)&&(m%3200!=0))||(m%172800==0))
	   s= true;
	else 
	   s= false;
	return s;}