#include<stdio.h>
int factorialRange(int start,int end){
    if(start>end || start<0 || end <0){
        printf("Invalid range");
    }
   else{
        for(int i=start;i<=end;i++){
           int fact =1;
           for(int j=1;j<=i;j++){
            fact = fact *j;
           }
           printf("%d",fact);
           printf("\n");
        }
    }
}
