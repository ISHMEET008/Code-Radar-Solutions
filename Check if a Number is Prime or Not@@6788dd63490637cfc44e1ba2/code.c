// Your code here...
#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n%i == 0){
            a=0;
            break;
        }
    }
    if(a==0){
        printf("Not Prime");
    } else{
        printf("Prime");
    }
    return 0;
}