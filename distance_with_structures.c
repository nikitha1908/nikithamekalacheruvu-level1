//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct point
{
int x,y;
};
compute_distance(struct point x,struct point y )
{
int distance;
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return distance;
}
int main()
{
int x1,y1,x2,y2;
printf("enter the points x1");
scanf("%d",&x1);
printf("enter the points y1");
scanf("%d",&y1);
printf("enter a point x2");
scanf("%d",&x2);
printf("enter a point y2");
scanf("%d",&y2);
printf("distance between two points are %d",distance);
return 0;
}
