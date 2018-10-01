#include <stdio.h>

int main (void)
{
    int vx,vy;

    printf("整数A:");
    scanf("%d",&vx);
    printf("整数B:");
    scanf("%d",&vy);

    printf("A是B的%.1f%%。\n",(double)vx/vy*100);

    return (0);
}
