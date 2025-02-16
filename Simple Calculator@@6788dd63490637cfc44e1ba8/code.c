// Your code here...
#include<stdio.h>
int main(){
    int  a,b,result;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    // scanf("%c",&op);
    switch(op){
        case '+':
        result=a+b;
        printf("%d",result);
        break;
        case '-':
        result=a-b;
        printf("%d",result);
        break;
        case '*':
        result=a*b;
        printf("%d",result);
        break;
        case '/':
        if(b==0){
            printf("error");
        }
        else{
            result=a/b;
            printf("%d",result);
        }
        // result=a/b;
        // printf("%d",result);
        break;
        default:
        printf("Error");
    }
    // printf("%d",result);
    return 0;
}