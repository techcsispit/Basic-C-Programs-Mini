#include <stdio.h>
#include<math.h>
int main()
{   
    int n,i,rem,sum=0,temp,t1;
    printf("Enter any number");
    scanf("%d",&n);
    temp=n;
    t1=n;
    for ( i = 0; temp!=0; i++)
    {
        temp=temp/10;
    }
    while ( n>0)
    {  
        rem=n%10;
        sum=sum+pow(rem,i);
        n=n/10;
    }
    if (t1==sum)
    printf("%d is an armstrong number",t1);
    else
    printf("%d is not an armstrong number",t1);
    
    
    return 0;
}
