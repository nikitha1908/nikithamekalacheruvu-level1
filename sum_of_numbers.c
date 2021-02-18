//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int main()
 {
    int n, i, sum = 0;
    printf("Enter a value of n= ");
    scanf("%d", &n);
   for(i=0;i<=n;i++)
  {
    sum=sum+i;
   }

    printf("Sum = %d", sum);
    return 0;
}

