#include<stdio.h>
void main()
{
 int i,j,n;
 printf("Enter the number of elements\n");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the numbers\n");
 for(i=0;i<n;i++)
 {
  scanf("%d", &arr[i]);
 }
 
 for(i=0;i<n;i++)
    {
     for(j=0;j<n-1-i;j++)
        {
         if(arr[i]>arr[i+1])
           {
           arr[i]=arr[i]+arr[i+1];
       	   arr[i+1]=arr[i]-arr[i+1];
  		   arr[i]=arr[i]-arr[i+1];
   	       }
 		}
    }
 for(i=0;i<n;i++)
 {
  printf("%d\t", arr[i]);
 }
}