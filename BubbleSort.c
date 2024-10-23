#include <stdio.h>
int main()
{
    int n,i,t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            t=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=t;
        }
    }
    printf("Sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}