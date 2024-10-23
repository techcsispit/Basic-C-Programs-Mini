/*C program to display armstrong number
between 1 to 1000*/
#include <stdio.h>
#include<math.h>
void arm(int n)
{   int n2, n1,j, r, y, i, p, sum = 0;
    n1 = n;
    n2 = n;
    p = 0;
    while (n2>0)
    {
        y = n2 % 10;
        n2 /= 10;
        p++;
    }
    while (n1>0)
    {
        r = n1 % 10;
        j=pow(r,p);
        sum += j;
        n1 /= 10;
    }
    if (sum == n)
        printf("%d\n",n);
}

int main(){
    int i;
    for(i=0;i<1000;i++)
    {
        arm(i);
    }
    
return 0;
}


