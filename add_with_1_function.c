//Write a program to add two user input numbers using one function.
#include <stdio.h>
int main()
{
    float a,b,sum;
    printf("enter a number a");
    scanf("%f",&a);
    printf("enter a number b");
    scanf("%f",&b);
    sum=a+b;
    printf("%f+%f=%f",a,b,sum);
    return 0;
}

