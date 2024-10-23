#include <stdio.h>
#define max 100

//Function to print digit numbers line by line.
//Like :- User enter the number : 123
//output be like :- 1
//                  2
//                  3
void line_by_line(int x);
void line_by_line(int a){
    int a, b,c;
    do{
        b = a%10;
        printf("%d\n", b);
        a = a/10;
    }
    while (a!=0);
    
    
}

//Function to print Sum of the entered digit.
// Example :- 123 = 6
void sum_digit(int x);
void sum_digit(int no){
    int a, b,c; a=no; int s=0; c=no;
    do{
        b = a%10;
        a = a/10;
        s=s+b;
    }
    while (a!=0);
    printf("%d = %d\n",c,s);
}

//Function to print total of the entered digit.
// Example :- 123 = 3
void total_digit(int x);
void total_digit(int no){
    int a, b,c; a=no; int s=0; c=no;
    do{
        b = a%10;
        a = a/10;
        s++;
    }
    while (a!=0);
    printf("%d = %d",c,s);
}
int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    
    line_by_line(no);
    
    sum_digit(no);
    
    total_digit(no);
    return 0;
}
