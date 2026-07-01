#include <stdio.h>
int main()
{
    int a, b, c;

    printf(" Enter first Angle:");
    scanf("%d", &a);

    printf("Enter Second Angle:");
    scanf("%d", &b);

    c = 180 - (a + b);
    printf("Enter Third Angle=%d", c);

    return 0;
}