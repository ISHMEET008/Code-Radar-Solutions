// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=1;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;}
    while(i<=n){
        sum=sum+i;
        i++;
    }
        printf(
            "%d",sum
        );
    
    return 0;
}