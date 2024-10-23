#include <stdio.h>
int a,b;
int op;
float ans;
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int add(int a, int b){
    int sum;
    sum= a+b;
    return sum;
}

int sub(int a, int b){
    int diff;
    diff= a-b;
    return diff;
}

int mul(int a, int b){
    int pro;
    pro= a*b;
    return pro;
}

float div(int a, int b){
    float quo;
    quo= a/b;
    return quo;
}

int main()
{
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Enter the operation:\n 1 for addition\n 2 for substraction\n 3for multiplication \n 4 for division\n");
    scanf("%d",&op);

    if(op ==1){
       ans= add(a,b);
        printf("%d",ans);
    }else if (op ==2)
    {
        ans= sub(a,b);
        printf("%d",ans);
    }else if (op ==3)
    {
        ans= mul(a,b);
        printf("%d",ans);
    }else if (op ==4)
    {
        ans= div(a,b);
        printf("%f",ans);
    }
    
    
    
    return 0;
}
