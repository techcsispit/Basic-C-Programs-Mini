/*C program to display armstrong number
between 1 to 1000*/
#include <stdio.h>
#include<math.h>
int main()
{   
    int n,i,rem,sum=0,temp,t1,t2;
    for(n=1;n<=1000;n++)
    {
    temp=n;
    t1=n;
    t2=n;
    for ( i = 0; temp!=0; i++)
    {
        temp=temp/10;
    }
    while ( t2>0)
    {  
        rem=t2%10;
        sum=sum+pow(rem,i);
        t2=t2/10;
    }
    if (t1==sum)
    printf("%d \n",t1);
    }
    return 0;
}


