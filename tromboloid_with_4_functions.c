//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input()
{
    float num;
    printf("enter a value of h in first entery,d in second entery and b in third entery ");
    scanf("%f",&num);
    return num;
}
    
    float volume(float h,float d,float b)
{
   
    float volume=0.33*((h*d*b)+(d/b));
    return volume;
}
    float output(float volume)
{
    printf( "%f",volume);
    
}
    int main()
{
        float h,d,b,v;
        h=input();
        d=input();
        b=input();
        v=volume(h,d,b);
        output(v);
        return 0;
 }
