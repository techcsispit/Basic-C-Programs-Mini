//Modify the C program to find average of n numbers.

#include <stdio.h>
int main()
{
  int size;
  printf("enter the number of elements: ");
  scanf(" %d",&size);
  float array[size];
  for (int i = 0;i<size;i++){
    scanf("%f",&array[i]);
  }
  float sum=0;
  for(int i = 0; i< size; i++){
    sum += array[i];
  }
  float avg = sum / size;

  printf("Average of %d numbers=%lf", size,avg);
  return 0;
}
