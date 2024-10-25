/*C program to display armstrong number
between 1 to 1000*/

#include<stdio.h>
int armstrong(int n);
int main()
{
    for(int i = 1; i <= 1000; i ++)
    {
        if(armstrong(i) == 1)
        printf("%d", i);
        else 
        printf("No");
    }
    return 0;
}
int armstrong(int n)
{
    int b = n;
    int sum = 0;
    while(b>0)
    {
        int m;
        if(b > 10){
            m = b%10;
        }
        else{
           m = b; 
        }
        b = b/10;
        sum = sum+(m*m*m);
    }

    if(sum == n)
    return 1;
    else
    return 0;
}