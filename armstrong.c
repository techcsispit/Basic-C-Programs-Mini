#include<stdio.h>
#include<math.h>

int main()
{

	int sum=0, num, c=0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	int temp1=num;
	int temp2=num;
	
	while(temp2)
	{
		temp2/=10;
		c++;
	}
	
	while (num)
	{
		sum += pow(num%10, c);
		num = num / 10;
	}
	
	printf("%d %d\n",sum ,c);
	
	if (sum == temp1)
	{
		printf("It is an Armstrong number.");
	}
	else
	{
		printf("It is not an Armstrong number.");
	}
	
	return 0;
}