#include <stdio.h>
int main()
{
    float salary, hra, da, ta, gross;

    printf("Enter Base  salary:");
    scanf("%f", &salary);

    hra = salary * 10 / 100;
    da = salary * 5 / 100;
    ta = salary * 8 / 100;

    gross = salary + hra + da + ta;
    printf("Gross salary=%.2f",gross);
    return 0;
}