//C program to check a number whether it is palindrome or not.
#include<stdio.h>
#include<math.h>
void main(){
    int n ,c=-1 , sum=0 ;
    printf("Enter a number");
    scanf("%d",&n);
    int temp = n;
    int num1 = n;

    while (n!=0)
    {
        c+=1;
        n=n/10;
    }
    

    while(num1!=0){
        int mydigit = num1%10;
        int power = pow(10,c);
        sum = sum + mydigit*power;
        c--;
        num1=num1/10;
    }
    if ( temp==sum) {
        printf("Palindrome");
    }
    else{
    printf("Not Palindrome");
    }
}
