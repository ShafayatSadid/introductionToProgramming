#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[n];

    int i = 0;
    while (i < n)
    {
        scanf("%d", &x[i]);
        i++;
    }

    int even = 0, odd = 0, negative = 0, positive = 0;

    for (i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x[i] > 0)
        {
            positive++;
        }
        else if(x[i] < 0)
        {
            negative++;
        }
    }

    

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
}