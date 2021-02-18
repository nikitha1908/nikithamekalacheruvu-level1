//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
   int n;
   printf("enter the value of n= ");
   scanf("%d",&n);
   return n;
}

int sum(int num)
{
   int add= 0;
   for(int i=1; i<=num; i++)
   {
     add=add+i; 
   }
   return add;
}


void display(int n, int sum)
{
   printf("sum of numbers= %d", sum);
}

int main()
{
   int range, result;
   range = input();
   result = sum(range);
   display(range, result);
   return 0;
}
