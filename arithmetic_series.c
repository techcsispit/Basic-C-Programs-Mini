#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c)
{
    int d = b-a;
    int nth_term = (a + (n-1)*d);
    return nth_term;
}

int main()
{
    int n, a, b, c;
    
    printf("First term of sequence:");
    scanf("%d",&a);
    
    printf("Second term of sequence:");
    scanf("%d",&b);
    
    printf("Third term of sequence:");
    scanf("%d",&c);

    printf("Enter n:");
    scanf("%d",&n);
    
    int ans = find_nth_term(n, a, b, c);
 
    printf("the nth term is %d\n", ans);
    
    return 0;
}

