#include<stdio.h>
int main(){
    int a=11;
    float b=2.56f;
    double c=6.1324;
    char d='A';
    long e=123456789;
    short f=33000;
    unsigned int g=100;
    long long h=9876543210;
    unsigned char i=255;
    _Bool j=1;
    printf("int:%d\n",a);
    printf("flot:%.2f\n",b);
    printf("double:%.8f\n",c);
    printf("char:%c\n",d);
    printf("long:%id\n",e);
    printf("short:%d\n",f);
    printf("unsigned int:%u\n",g);
    printf("long long:%11d\n",h);
    printf("unsigned char:%u\n",i);
    printf("boolean (_Bool):%d\n",j);
    return 0;
}