#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b)
{
   int c=b-a;
   int x=a+(n-1)*c;  //completed function program //
   return x;
}

int main()
{
    int n, a, b;                         // removed c from main program //
  
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    int ans = find_nth_term(n, a, b);
 
    printf("the ans is %d\n", ans);
    
    return 0;
}

