#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    (num>0)? printf("%d is possitive\n",num):
    (num<0)? printf("%d is negetive\n",num):
    printf("the number is zero\n");
    return 0;
}