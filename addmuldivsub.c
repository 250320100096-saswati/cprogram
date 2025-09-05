//wap to preform addition,substraction,multiplication and division of two number
#include<stdio.h>
int main(){
    char operator;
    double num1,num2;
    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    switch(operator){
        case'+':
        printf("%f+%f=%f",num1,num2,num1+num2);break;
        case'-':
        printf("%f-%f=%f",num1,num2,num1-num2);break;
        case'*':
        printf("%f*%f=%f",num1,num2,num1*num2);break;
        case'/':
       if(num2!=0){
        printf("%f/%f=%f",num1,num2,num1/num2);break;
        } else{
            printf("errpr!division by zero is not allowed.\n");
        }
break;
default:
printf("error!invalid operator entered.\n");
    }
    return 0;
}