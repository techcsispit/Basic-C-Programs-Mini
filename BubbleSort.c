#include <stdio.h>

void bs(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j]> arr[j+1]){
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int k = 0; k<n; k++){
        printf("%d ", arr[k]);
    }
}
int main()
{
    int n;
    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your unsorted array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sorted array: ");
    bs(arr, n);
    return 0;
}