//WAP to find the sum of two fractions.

#include<stdio.h>
typedef struct
{ 
    int num;
    int deno;
}fraction;
void input_fraction(fraction*f1,fraction*f2)
{
printf("enter the num and deno of fraction 1");
scanf("%d%d",&f1->num ,&f1->deno );
printf("enter the num and deno of fraction 2");
scanf("%d%d",&f2->num,&f2->deno);
}
fraction comput_fraction(fraction f1,fraction f2 )
{
fraction n_d={f1.num*f2.deno+f2.num*f1.deno,f1.deno*f2.deno};
int gcd;
gcd=find_gcd(n_d.deno);
n_d.num=n_d.num/gcd;
n_d.deno=n_d.deno/gcd;
return n_d;
}
int find_gcd(int a,int b)
{
   while (a!=b)
   {
         if (a>b)
             a-=b;
        else
             b-=a;
    }
 return a;
}
void output_fraction(fraction f1,fraction f2,fraction n_d)
{
  printf("%d/%d+%d/%d=%d%d",f1.num,f1.deno,f2.num,f2.deno,n_d.num,n_d.deno)
}
int main()
{
fraction f1,f2,n_d;
input_fraction(&f1,&f2);
n_d=compute_fraction(f1,f2);
output_fraction(f1,f2,n_d);
return 0;
}
