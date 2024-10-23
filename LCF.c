#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    int i;
    int gcd=1;
    for(i=1;i<n1 && i<n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    int lcm=n1*n2/gcd;
    printf("LCM is %d",lcm);
    return 0;
}