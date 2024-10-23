#include <stdio.h>
#define max 100
#include <math.h>
//Function to print digit numbers line by line.
//Like :- User enter the number : 123
//output be like :- 1
//                  2
//                  3
void line_by_line(int no){
  
}

//Function to print Sum of the entered digit.
// Example :- 123 = 6
void sum_digit(int no){
    int t;
    int sum=0;
    while(no>0)
    {
        t=no%10;
        sum=sum+t;
        no=no/10;
    }
    
}

//Function to print total of the entered digit.
// Example :- 123 = 3
void total_digit(int no){
    
}
int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    
    line_by_line(no);
    
    sum_digit(no);
    
    total_digit(no);
}
