//develop a program to calculate the area and circumference of a circle
#include<stdio.h>
#define PI 3.1416
int main(){
  float radius,area,circumference;
  printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("area of circle=%f\n",area);
    printf("circumference of circle =%f\n",circumference);
    return 0;
}