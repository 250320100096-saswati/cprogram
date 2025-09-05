//implement a program to calculate the sum and average of three numb
#include<stdio.h>
int main(){
    int num1,num2,num3;
    int sum;
    float average;
    printf("enter three integers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    Average=(float)sum/3;
    printf("\nsum=%d\n",sum);
    printf("average=%.2f\n",Average);
    return 0;
}