#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int, int , int , int);
int find_nth_term(int n, int a, int b, int c)
{
    //complete the function
    int d1=b-a;
    int d2=c-b;
    int tn= a + (n-1)*d1;
    if(d1!=d2){
        printf("Such AP doesnt exist");

    }else{
        return tn;
    }
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

