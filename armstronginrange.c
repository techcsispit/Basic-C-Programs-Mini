/*C program to display armstrong number
between 1 to 1000*/
#include <stdio.h>
#include<math.h>
int main()
{
    int i;
    int ognum, num, n, count, rem, tsum;
    for(i = 0; i<=1000; i++)
    {
        ognum = i;
        num = i;
        n=i;
        count = 0;
        while(n!=0)
        {
            n = n/10;
            count++;
        }
        tsum = 0;
        while(num!=0)
        {
            rem = num%10;
            tsum = tsum+pow(rem,count);
            num=num/10;
        }
        if(tsum == ognum)
        {
            printf("%d = Armstrong\n", tsum);
        }
    }
    return 0;
}


