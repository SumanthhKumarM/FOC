#include<stdio.h>
#include<math.h>
int main()
{
int choice;
printf("enter\n1 to find area of triangle\n2 for finding area of square\n3 for finding area of circle\n4 for finding area of rectangle\n5 for parallelogram\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
int a,b,c;
float s,area;
printf("enter sides of triangle\n");
scanf("%d%d%d",&a,&b,&c);
s=( float)(a+b+c)/2;
area+(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
printf("area of triangle is %f\n",area);
break;
}
case 2:
{
float side,area;
printf("enter sides of square\n");
scanf("%f", &side);
area=(float)side*side;
printf("area of square is %f\n",area);
break;
}
case 3:
{
float radius,area;
printf("enter radius of circle\n");
scanf("%f", &radius);
area=(float)3.14159*radius*radius;
printf("area of circle %f\n",area);
break;
}
case 4:
{
float len,breadth,area;
printf("enter length and breadth of rectangle\n");
scanf("%f %f",&len,&breadth);
area=(float)len*breadth;
printf("area of rectangle is %f\n",area);
break;
}
case 5:
{
float base,height,area;
printf("enter base and height of parallelogram\n");
scanf("%f %f",&base,&height);
area=(float)base*height;
printf("enter area of parallelogram is %f\n",area);
break;
}
default:
{
printf("invalid choice\n");
break;
}
}
}
