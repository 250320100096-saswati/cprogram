#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("logical AND(a<10&&b>5):%d\n",(a<10&&b>5));
    printf("logical OR (a>10||b>5):%d\n",(a>10||b>5));
    printf("logical NOT (!(a==b)):%d\n",!(a==b));
    return 0;
}