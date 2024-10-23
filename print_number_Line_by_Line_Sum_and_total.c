#include <stdio.h>
#define max 100

//Function to print digit numbers line by line.
//Like :- User enter the number : 123
//output be like :- 1
//                  2
//                  3

int reverse(int num){
    int new_num=0;
    while (num!=0){
        int r = num %10;
        new_num = new_num*10 +r;
        num /= 10;
    }
    return new_num;
}   

void line_by_line(int no){
    int reversed_no = reverse(no);
    while (reversed_no !=0)
    {
        printf("%d\n",reversed_no%10);
        reversed_no /= 10;
    }
    
}

//Function to print Sum of the entered digit.
// Example :- 123 = 6
void sum_digit(int no){
    int sum = 0;
    while (no !=0)
    {
        sum += no%10;
        no /= 10;
    }
    printf("the sum of digits are %d\n",sum);

}

//Function to print total of the entered digit.
// Example :- 123 = 3
void total_digit(int no){
    int digits = 0;
    while (no != 0)
    {
        digits++;
        no /= 10;
    }   
    printf("the number of digits are %d\n",digits);
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
