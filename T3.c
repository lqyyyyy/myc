#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    d=2;

    for(a=1;a<=d;a++){
        for(b=1;b<=a-1;b++)
            printf(" ");

        for(c=1;c<=7-2*a;c++)
            printf("*");
        printf("\n");
    }

    int i,j,k,ln;
    ln=3;

    for(i=1;i<=ln;i++){
        for(j=1;j<=ln-i;j++)
            printf(" ");

        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
    return(0);
}
