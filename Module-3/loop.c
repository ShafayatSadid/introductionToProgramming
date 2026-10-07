#include <stdio.h>

int main()
{
    // for(int i = 10; i <= 99 ; i++){
    //     printf("%d I'm Sorry\n",i);
    // }
    // return 0;

    // for(int i = 99; i >= 10 ; i--){
    //     printf("%d I'm Sorry\n",i);
    // }
    // return 0;

    // int n;
    // scanf("%d", &n);

    // int sum = 0;

    // for(int i = 1; i <= n; i++){
    //     sum = sum + i;
    // }

    // printf("Sum of 1 to N = %d", sum);

    // return 0;

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

            if (i == 56)
            {
                continue;
            }
            printf("%d even\n", i);
        }
        else
        {
            printf("%d odd\n", i);
        }
    }

    return 0;
}