//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    float num;
    printf("enter a number");
    scanf("%f",&num);
    return num;
}
    float sum(float num1,float num2)
{
    float sum;
    sum=num1+num2;
    return sum;
}
    void output(float a,float b,float num)
{
    printf("sum of %f and %f is %f",a,b,num);
    return 0;
}
    int main()
{
        float x,y,z;
        x=input();
        y=input();
        z=sum(x,y);
        output(x,y,z);
        return 0;
 }
