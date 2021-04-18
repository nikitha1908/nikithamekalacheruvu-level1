//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct
{
  int num;
  int deno;
}fraction;
int input_n()
{
  int n;
  printf("enter the no of fractions to be added ");
  scanf("%d",&n);
  return n;
}
fraction input_fraction()
{
 fraction fra;
printf("enter the num and deno of the fraction");
scanf("%d%d",&fra.num,&fra.deno);
return fra;
}
void input_n_fractions(int n,fraction fra[n])
{
   for(int i=0;i<n;i++)
   {
      fra[i]=input_fractions();
   }
}
fraction compute_fraction(int n,fraction fra[n])
{
   int final_denominator=1,final_numerator=0,gcd;
   for(int i=0;i<n;i++)
  {
      final_deno*=fra[i].deno;
}
for(int i=0;i<n,i++)
{
 final_numerator+=(fra[i].num)*(final_denominator/fra[i].deno);
}
fraction n_d={final_numerator,final_denominator};
gcd=find_gcd(n_d.num,n_d.deno);
n_d.num=n_d.num/gcd;
n_d.deno=n_d.demo/gcd;
return n_d;
}
int find_gcd(int a,int b)
{
   while(a!=b)
   {
      if(a>b)
       a-=b;
      else 
        b-=a;
    }
   return a;
}
void output(int n,fraction fra[n],fraction n_d)
{
   for(int i=0;i<n-1;i++)
   {
        printf("%d/%d+",fra[i].num,fra[i].denp);
    }
   printf("%d/%d=%d/%d",fra[n-1].num,fra[n-1].deno,n_d.num,n_d.deno);
 }  
  int main()
{
int n;
n=input_n();
fraction fra[n],n.d;
input_n_fractions(n,fra);
n_d=compute_fraction(n,fra);
output (n,fra,n_d);
return 0;
}
