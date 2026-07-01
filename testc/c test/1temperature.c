#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperture in celsius:");
    scanf("%f",&c);


    f=(9.0/5.0)*c+32;
    printf("Enter temperture in fahrenheit=%.1f",f);

    
    return 0;
}