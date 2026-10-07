#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i = 1;

    while (i <= n)
    {
        printf("%d I'm Sorry\n", i);
        i++;
    }

    do{
        printf("%d Ami sore darailam\n",i);
        i++;
    }
    while(i <= n);
}