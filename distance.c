//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
  float input(float *x1,float *y1,float *x2,float *y2)
 {
printf("enter the coordinates of (x1,y1)");
scanf("%f%f",x1,y1);
printf("enter the coordinates of (x2,y2)");
scanf("%f%f",x2,y2);

}
 float find_distance(float x1,float y1,float x2,float y2)
{
  int distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return distance;
}
void output(float distance)
{
 printf("distance between two points %f",distance);
 
}
int main()
{
float x1,y1,x2,y2,distance;
input(&x1,&y1,&x2,&y2);
distance =find_distance(x1,y1,x2,y2);
output(distance);
}

