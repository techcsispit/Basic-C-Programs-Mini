#include<stdio.h>

int main(){
  unsigned int a,b,c;
  printf("Enter 2 numbers: ");
  scanf("%d%d",&a,&b);
  printf("Input: %d %d",a,b);
  printf("Output:\n");
  printf("OR:%d\n",a|b);
  printf("AND:%d\n",a&b);
  printf("XOR:%d\n",a^b);
}