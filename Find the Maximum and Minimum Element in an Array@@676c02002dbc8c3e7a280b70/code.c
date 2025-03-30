#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n-1;i++){
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]<min){
            min = arr[i];
            
        }
       
    }
     printf("%d ",min);
    int max=arr[0];
    for(int j=1;j<=n-1;j++){
        if(arr[j]>max){
            max =arr[j];
           
        }
         
    }
    printf("%d",arr[j]);
    return 0;
}