// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int y = 12;

//     if (x >= y || x <= y)
//     {
//         printf("hi ");
//     }

//     printf("hello");
// }

// #include <stdio.h>

// int main(){

//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a + b);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int a_m = a * 2;
    int b_m = b * 2;

    if (b == a_m || a == b_m)
    {
        printf("Yes");
    }
    return 0;
}
