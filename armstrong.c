#include <stdio.h>
#include<math.h>
int main()
{
    int ognum, num, n, count, rem, tsum;
    printf("Enter the number\n");
    scanf("%d",&n);
    ognum = n;
    num = n;
    count = 0;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    tsum = 0;
    while(num>=0)
    {
        rem = num%10;
        tsum = tsum+pow(rem,count);
        num=num/10;
    }
    if(tsum == ognum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
    return 0;
}
