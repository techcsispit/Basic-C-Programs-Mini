#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c)
{
    int d,x;
    d=b-a;
    x=a+(n-1)*d;
    return x;
}

int main()
{
    int n, a, b, c;
  
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of 1st term:");
    scanf("%d",&a);
    
    printf("Enter the value of 2nd term:");
    scanf("%d",&b);
    
    printf("Enter the value of 3rd term:");
    scanf("%d",&c);
    
    int ans = find_nth_term(n, a, b, c);
 
    printf("The Ans is %d\n", ans);
    
    return 0;
}