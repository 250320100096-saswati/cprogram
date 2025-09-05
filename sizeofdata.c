// implement a program to find the size of int,flot,char,and double data type.
#include<stdio.h>
int main(){
    int inttype;
    float flottype;
    double doubletype;
    char chartype;
    printf("size of int:%u bytes\n",sizeof(inttype)) ;
    printf("size of flot:%u bytes\n",sizeof(flottype));
    printf("size of double:%u byte\n",sizeof(double));
    printf("size of char:%u byte\n",sizeof(chartype));
    return 0;
}