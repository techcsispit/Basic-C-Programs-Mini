#include<stdio.h>

void main(){
    int n;
    int arr[n];
    printf("Enter the number of inputted numbers: ");
    scanf("%d",&n);
    printf("Enter the number stream: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The number stream before: ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            if(arr[k]>arr[k+1]){
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("The number stream after sorting: ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}