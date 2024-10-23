#include<stdio.h>

int main()
{
	int flag=1,num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	if(num==1)
	{
		printf("1 is neither prime nor composite.");
	}
	
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is not a prime number.",num);
	}
	else
	{
		printf("%d is a prime number.",num);
	}
	
	return 0;
}