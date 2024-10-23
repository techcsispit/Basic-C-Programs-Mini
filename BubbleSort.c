#include<stdio.h>

int main()
{
	int arr_size;
	
	printf("Enter size of array:");
	scanf("%d",&arr_size);
	
	
	int user_arr[arr_size], temp;
	
	for(int arr_count=0;arr_count<arr_size;arr_count++)
	{
		scanf("%d",&user_arr[arr_count]);
	}
	
	for(int i=0;i<arr_size;i++)
	{
		for(int j=0; j<arr_size-(i+1);j++)
		{
			if(user_arr[j]>user_arr[j+1])
			{
				temp = user_arr[j+1];
				user_arr[j+1] = user_arr[j];
				user_arr[j] = temp;
			}
			
		}
	}
	
	printf("Sorted Array:");
	for(int k=0;k<arr_size;k++)
	{
		printf("%d\n",user_arr[k]);
	}
	
	return 0;
}

