// Your code here...
#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(int i=2; i<n/2; i++){
        if(n%i == 0){
            a=0;
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