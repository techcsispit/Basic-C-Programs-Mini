#include <stdio.h>
#define max 100

//Function to print digit numbers line by line.
//Like :- User enter the number : 123
//output be like :- 1
//                  2
//                  3
void line_by_line(int no){
    while (no != 0)
        {
            int rem, sum;
            rem = no%10;
            sum = sum*10+ rem;
            no=no/10;

            sum = sum%10;
            printf("%d\n", sum);
            sum = sum / 10;
        }
}

//Function to print Sum of the entered digit.
// Example :- 123 = 6
void sum_digit(int no){
    int sum = 0;
    while(no!= 0){
    no = no%10;
    sum += no;
    no = no / 10;
    }
    printf("%d", sum);
    
}

//Function to print total of the entered digit.
// Example :- 123 = 3
void total_digit(int no){
    int count = 0;
    while (no!= 0)
        {
            no = no / 10;
            count++;
        }
        printf("%d", count);
}
int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    int ta = no;
    int tb = no;
    int tc = no;
    line_by_line(ta);
    sum_digit(tb);
    
    total_digit(tc);
}
