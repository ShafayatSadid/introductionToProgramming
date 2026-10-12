// M. Capital or Small or Digit
#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    if (n >= 'A' && n <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
        
    }
    else if (n >= 'a' && n <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else
    {
        // n = n - 32;
        printf("IS DIGIT\n");
    }

    return 0;
}
