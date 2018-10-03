#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("a:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    printf("c:");scanf("%d",&c);

    if (a+b<=c || b+c<=a || a+c<=b)
        printf("0");

        else if (a==b&&b==c)
            printf("1");

        else if ((a==b&&a!=c) || (b==c&&b!=a) ||( a==c&&a!=b))
            printf("2");
        else
            printf("3");

    return (0);
}
