//C program to check a number whether it is palindrome or not.
#include <stdio.h>
int reverse(int num){
    int new_num=0;
    while (num!=0){
        int r = num %10;
        new_num = new_num*10 +r;
        num /= 10;
    }
    return new_num;
}   

int main(){    
    printf("enter a number: ");
    int num;
    scanf("%d",&num);
    if( num == reverse(num)){
        printf("the number is a palindrome\n");
    }
    else printf("the number is not a palindrome\n");

    return 0;
}

