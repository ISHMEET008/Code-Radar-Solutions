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
            if(a[j]>a[j+1]){
                int temp =a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int h=0;h<n;h++){
        printf("%d",arr[i]);
    if(arr[i]==arr[n]){
        printf("Sorted")
    }
    else{
        printf("Not Sorted")
    }
    return 0;
}}