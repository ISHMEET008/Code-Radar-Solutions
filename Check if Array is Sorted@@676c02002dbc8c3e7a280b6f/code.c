// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int h=0;h<n;h++){
        printf("%d",arr[h]);
    if(arr[h]==arr[n]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}}