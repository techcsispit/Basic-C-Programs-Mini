/*C program mini game for guessing number between 1 to 100*/
#include<stdio.h>

int main()
{
    int no = 69;
    int n;
    printf("enter a number between 1 to 100\n");
    scanf("%d",&n);

    if(n == no)
    printf("Right guess\n");
    else
    printf("Not Right guess\n");
}