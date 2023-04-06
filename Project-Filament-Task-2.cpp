#include<stdio.h>
#include<string.h>
main()
{
	int i,l,letters=0,digits=0,symbols=0;
	char pd[50];
	printf("Enter the Password->");
	scanf("%s",&pd);
	
	l=strlen(pd);
	
	if(l<6)
	{
		printf("Password must be at least 6 characters long!");
	}
	
	for(i=0;i<l;i++)
	{
		if(pd[i] >='a' && pd[i] <='z' || pd[i] >='A' && pd[i] <='Z')
		{
			letters=1;
		}
		else if(pd[i] >='0' && pd[i] <='9')
		{
			digits=1;
		}
		else
		{
			symbols=1;
		}
	}
	if(letters==1 && digits==1 && symbols==1)
	{
		printf("\n%s<-This Password is Valid!",pd);
	}
	else
	{
		printf("Password Must Contain At Least One Digit,Letter And Special Character!!!!!");
	}
}
