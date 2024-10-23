#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c)
{
    int d=b-a;
    int x=a+(n-1)*d;
    return x;
}

int main()
{
    int n, a, b, c;
  
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    printf("Enter the value of c:");
    scanf("%d",&c);
    
    int ans = find_nth_term(n, a, b, c);
 
    printf("the ans is %d\n", ans);
    
    return 0;
}

