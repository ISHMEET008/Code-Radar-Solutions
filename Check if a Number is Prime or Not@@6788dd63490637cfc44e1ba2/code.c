// Your code here...
#include<stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n%i == 0){
            a=1;
            break;
        }
    }
    if(a=1){
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}