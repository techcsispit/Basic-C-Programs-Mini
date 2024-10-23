#include <stdio.h>
#include<math.h>
int main()
{
    // complete the code
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int s=0; int a; int b; int c;int x; int count=0;
    a=number; b=number; c=number;
    do{
      a=number%10;
      number=number/10;
      s++;
    }while(number!=0);
    do{
        x=b%10;
        b=b/10;
        count=count + pow(x,s);
    }while(b!=0);
    if(count==c){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }

    return 0;
}