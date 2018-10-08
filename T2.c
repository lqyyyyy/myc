#include <stdio.h>

int main(void)
{
    int a , b;

    printf("grade1:");scanf("%d",&a);
    printf("grade2:");scanf("%d",&b);

    if (a<0 || a>100 || b<0 || b>100)
        puts("it is error.");
    else
        switch (a / 10){
        case 0 :
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 : puts("it is not pass."); break;
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 10 : switch (b / 10){
            case 0 :
            case 1 :
            case 2 :
            case 3 :
            case 4 :
            case 5 : puts("it is not pass."); break;
            case 6 :
            case 7 :
            case 8 :
            case 9 :
            case 10 : puts("it is pass."); break;}
        break;}
return (0);
}
