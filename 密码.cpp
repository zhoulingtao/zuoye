#include <stdio.h>
#include <string.h>
int main(){
	char a[20],b[20],c[20];
    bool flag=true;
    printf("please enter a password£¡\n");
	strcpy(c,"000000");
    while(flag)
	   {gets(a);
		if (strcmp(a,c)==0)
			 printf("It has been successfully unlocked!\n");
	    else 
			{if (strcmp(a,b)==0)
				 {printf("The new key has been successfully set up!\n");
				  strcpy(c,b);
				  continue  ;}
			 printf("If you want to change the password, please enter this password again!\n");
			 printf("Otherwise you entered a wrong password!\n");       
			 strcpy(b,a); }}    
  return 0;}
