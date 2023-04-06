#include<stdio.h>
#include<string.h>
main()
{
	char c1[50];
	char c2[50];
	
	 printf("Enter String->");
	 scanf("%s",&c1);
	 
	 strcpy(c2,c1);
	 strrev(c2);
	 
	 if(strcmp(c1,c2)==0)
	 {
	 	printf("String is Palindrome!");
	 }
	 else
	 {
	 	printf("String is not Palindrome!!");
	 }
}
