#include<stdio.h>
int factorialRange(int start,int end){
    int fact =1;
    if(start>end || start<0 || end <0){
        return ("Invalid range");
    }
    else{
        for(int i=start;i<=end;i++){
        fact = fact*i;
        printf("%d",fact);
            printf("\n");
        }
    }
}
int main(){
    int start,end;
    scanf("%d %d",start,end);
    factorialRange(start,end);
    
    return 0;
}















