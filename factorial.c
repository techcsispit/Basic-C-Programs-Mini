#include <stdio.h>
int main()
{
    int fact;
    int ans=1;
    int i;
    printf("Enter the number");
    scanf("%d",&fact);
    for(i=1;i<=fact;i++)
    {
        ans=ans*i;
    }
    printf("The factorial is %d",ans);
    return 0;
}
