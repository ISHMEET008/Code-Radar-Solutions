#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n-1;i++){
        scanf("%d",&arr[i]);
        
    }
    int result[2];
    int min=arr[0];
    int max=arr[0];
    for(int k=1;k<=n-1;k++){
        if(arr[k]<min){
            min = arr[k];
        }
        if(arr[k]>max){
            max = arr[k];
        }
       
    }
    result[0]=min;
    result[1]=max;
    
    for(int i=0;i<2;i++){
        printf("%d ",result[i]);
       
    
    return 0;
    
    }