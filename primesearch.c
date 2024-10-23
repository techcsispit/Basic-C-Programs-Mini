//To check the n no. is a prime no. or not
#include<stdio.h>

void prime(int a)
{
	int count = 0;
	for(int i = 1; i<=a ; i++)
	{
		if(a%i==0)
		{
	  		count++;
		}
	}
	if(count==2)
		printf("Its prime\n");
	else
		printf("Its not prime\n");
}

void main()
{
	int p;
	printf("Enter a number");
	scanf("%d",&p);
	prime(p);
}