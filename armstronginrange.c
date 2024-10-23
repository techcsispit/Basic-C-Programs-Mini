/*C program to display armstrong number
between 1 to 1000*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check_armstrong(int num)
{
    int original_num, sum = 0;

    // Calculate the number of digits in the entered number
    int no_of_digits = 0;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        no_of_digits++;
    }

    // Store the original number for comparison later
    original_num = num;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (num != 0)
    {
        int remain = num % 10;
        sum += pow(remain, no_of_digits);
        num /= 10;
    }

    // Check if the calculated sum is equal to the original number
    if (sum == original_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    printf("enter lower range:");
    scanf("%d", &a);
    printf("enter upper range:");
    scanf("%d", &b);

    if (a > 0 && b > 0)
    {
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        for (int i = a; i <=b; i++){
            if (check_armstrong(i)){
                printf("%d is armstrong\n",i);
            }

        }
    }
    else{
        printf("enter valid positive ranges\n");
        main();
    }

    return 0;
}
