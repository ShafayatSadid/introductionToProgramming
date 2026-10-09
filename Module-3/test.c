#include <stdio.h>

int main (){
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c", &a, &b, &c, &d);

    printf("%d\n%lld\n%.2f\n%c\n", a, b, c, d);
}

#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int i = 1;

    while(i <= n){

        if(i % 5 == 0){
            printf("%d Yes\n", i);
        }
        else{
            printf("%d No\n", i);
        }
        i++;
    }
}

#include <stdio.h>
int main() {

    printf("Hello, world! I am learning C programming language. ^_^\n");

    printf("Programming is fun and challenging./\\/\\/\\\n");

    printf("I want to give my 100%% dedication to learn!    I will succeed one day.\n");

    return 0;
}

#include <stdio.h>

int main() {

    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int multiplication = a * b;

    printf("%lld", multiplication);
    return 0;
}

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    if (n > 1000)
    {
        printf("I will buy Punjabi\n");

        if (n >= 1500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    if(n % 3 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
