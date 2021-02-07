//Write a program to find the volume of a tromboloid using one function
*******************************************************************************/
#include <stdio.h>
int main()
{
   
    float h,d,b,vol;
    printf("enter height value");
    scanf("%f",&h);
    printf("enter distance value");
    scanf("%f",&d);
    printf("enter breath value");
    scanf("%f",&b);
    vol= 0.33*((h*d*b) + ( d / b));
    printf("%f",vol);
    return 0 ;
}
