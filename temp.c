// implement a program to convert a given temperature from celsius to fahrenheit
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%f celsius is equal to %f fahrenheit\n",celsius,fahrenheit);
    return 0;

}