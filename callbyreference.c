#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("before swapping:x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("after swapping:x=%d,y=%d\n",x,y);
    return 0;
}