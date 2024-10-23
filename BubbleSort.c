#include <stdio.h>

void display(int arr[],int size){
    for (int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){    
    int size;
    printf("enter the number of elements: ");
    scanf(" %d",&size);
    int array[size];
    for (int i = 0;i<size;i++){
        scanf("%d",&array[i]);
    }

    int no_of_swaps=4;
    while (no_of_swaps != 0)
    {
        no_of_swaps = 0;
        for(int i = 0; i<size-1;i++){
            if (array[i]>array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                no_of_swaps++;

            }
        }
    }

    display(array,size);

    
    return 0;
}