#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
     if(n<2){
            printf("-1");
            return 0;
        }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1,max2;
    // max1 = arr[0];
    max1 =max2 =INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]>max1){
            max2 = max1;
            max1=arr[j];
        }
        
        else if(arr[j]>max2 && arr[j]<max1 ){
                max2=arr[j];
        }
    }
    printf("%d",max2);
    return 0;
}