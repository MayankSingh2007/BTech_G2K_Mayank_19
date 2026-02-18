#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf ("Enter 1st number :- ");
    scanf("%d",&num1);
    getchar();
    printf ("Enter Operator (+,-,*,/): ");
    scanf("%c",&op);
    printf("\n"); 
    printf ("Enter 2nd number :- ");
    scanf("%d",&num2);
    switch(op){
        case'+':
        printf("Result = %d",num1+num2);
        break;
        case'_':
        printf("Result = %d",num1-num2);
        break;
        case'*':
        printf("Result = %d",num1*num2);
        break;
        case'/':
        if(num2 !=0)
        printf("Result = %d",num1*num2);
        else
        printf("Division by zero are not allowed");
        break;
        default:
        printf("Invalid operator");
    }
return 0;
}