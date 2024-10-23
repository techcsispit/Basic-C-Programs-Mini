#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, sum = 0;
    
    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate the number of digits in the entered number
    int no_of_digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        no_of_digits++;
    }
    
    // Store the original number for comparison later
    original_num = num;
    
    // Calculate the sum of each digit raised to the power of the number of digits
    while (num != 0) {
        int remain = num % 10;
        sum += pow(remain, no_of_digits);
        num /= 10;
    }
    
    // Check if the calculated sum is equal to the original number
    if (sum == original_num) {
        printf("%d is an Armstrong number\n", original_num);
    } else {
        printf("%d is not an Armstrong number\n", original_num);
    }
    
    return 0;
}
