#include<stdio.h>
int factorialRange(int start,int end){
    // int fact =1;
    if(start>end || start<0 || end <0){
        printf("Invalid range");
    }
   
    else{
        for(int i=start;i<=end;i++){
            int ans = fact(i);
        printf("%d",ans);
        }
    }
}
int fact(int i){
    if(i==0 || i==1){
        return 1;

    }
    else{
        return i*fact(i-1);
    }
}
// int main(){
//     int start,end;
//     scanf("%d %d",start,end);
//     factorialRange(start,end);
    
//     return 0;
// }















