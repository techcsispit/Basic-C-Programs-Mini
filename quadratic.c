#include<stdio.h>
#include<math.h>
int main()
{   
    int a,b,c;
    printf(" ax^2 +bx +c=0\n");
    printf("Enter a in this format\n");
    scanf("%d",&a);
    printf("Enter b in this format\n");
        scanf("%d",&b);
    printf("Enter c in this format\n");
        scanf("%d",&c);
    int det;
    int root1,root2;
    det=b*b-4*a*c;
    if(det<0){
        det=det*(-1);
        printf("The roots are imaginary");
        //not tryna find the img roots rn
    }else
    {
        root1= (-b + sqrt(det))/2*a;
        root2= (-b - sqrt(det))/2*a;
        printf("The roots are %d %d",root1,root2);
    }
    
    return 0;
}
