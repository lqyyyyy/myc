#include <stdio.h>

int main (void)
{
    int vx,vy;

    printf("����A:");
    scanf("%d",&vx);
    printf("����B:");
    scanf("%d",&vy);

    printf("A��B��%.1f%%��\n",(double)vx/vy*100);

    return (0);
}
