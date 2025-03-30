#include<stdio.h>
int factorialRange(int start,int end){
    // int fact =1;
    if(start>end || start<0 || end <0){
        printf("Invalid range");
    }
    else if(start==end){
        for(int i=1;i<=end;i++){
            fact = fact*i;
            printf("%d",fact);
            printf("\n");
        }
    }
    else{
        for(int i=start;i<=end;i++){
        printf("%d",fact(i));
        }
    }
}
int fact(int i){
    if(i==0 || i==1){
        return 1;

    }
    else{
        return n*fact(n-1);
    }
}
// int main(){
//     int start,end;
//     scanf("%d %d",start,end);
//     factorialRange(start,end);
    
//     return 0;
// }















