// wap develop a program to find the largest of three number
#include<stdio.h>
int main(){
    int a,b,c;
    int largest;
    printf("enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the largest number is:%d\n",largest);
    return 0;
}
