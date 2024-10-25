#include<stdio.h>

int main()
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i  = 0; i < n; i++)
    {
        printf("Enter element no %d: ", i+ 1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int temp;
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}