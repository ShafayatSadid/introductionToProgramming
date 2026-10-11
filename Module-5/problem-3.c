// P. First digit !
#include <stdio.h>

int main()
{
    char x[100];
    scanf("%s", &x);

    if (x[0] % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}