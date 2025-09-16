// implement a program to calculate the square root of a number.
#include<stdio.h>
int main(){
    double num,result;
    printf("enter a number:");
    scanf("%f",&num);
    if(num<0){
        printf("square root of a negative number is not real.\n");
    
    }else{
        result=sqrt(num);
        printf("the square root of %.2f is %.2f\n",num,result);
    }
    return 0;
}