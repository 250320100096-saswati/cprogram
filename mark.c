// weritea a program to take user input for name,age,markand display them
#include<stdio.h>
int main(){
    char name[50];
    int age;
    float mark;
    printf("enter your name:");
    scanf("%c",&name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your mark:");
    scanf("%f",&mark);
    printf("name:%s",name);
    printf("age:%d\n",age);
    printf("mark:%f\n",mark);
    return 0;
}