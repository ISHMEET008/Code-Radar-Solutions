// Your code here...
#include<stdio.h>
int main(){
    double a,b,result;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case "+":
        result=a+b;
        break;
        case "-":
        result=a-b;
        break;
        case "*":
        result=a*b;
        break;
        case "/":
        result=a/b;
        break;
        default:
        printf("Error");
    }
    printf("%d",result);
    return 0;
}