// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Not Prime");
    }
    else{
        if(n%n==0 && n%1==n){
            printf("Prime");
        }
    }
    return 0;
}