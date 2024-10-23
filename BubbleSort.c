#include <stdio.h>
int main()
{
    int n, t;
    printf("Your array has how many elements?");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d: ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (int a = 0; a < n; a++)
    {
        printf("%d", arr[a]);
    }
}