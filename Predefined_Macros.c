#include <stdio.h>
#define TIME = "18:28:47"
#define FILE = "Predefined_Macros.c"
#define DATE = "23/10/24"
#define LINE = 13
int main()
{
    printf("Predefined Macros :\n");

    printf("Current time :       %s\n",__TIME__);
    printf("Current file Name :  %s\n",__FILE__);
    printf("Current Date :       %s\n",__DATE__);
    printf("Line number is:      %d\n",__LINE__); 
    
    return 0;
}