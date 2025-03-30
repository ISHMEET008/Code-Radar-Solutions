#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int max1,max2;
    max1 = arr[0];
    for(int j=0;j<n;j++){
        if(a[j]>max1){
            max1 = max2;
            max1=arr[i];
        }
        else if(a[i]>max2 && a[i]<max1 ){
                max2=arr[i];
        }
    }
    printf("%d",max2);
    return 0;
}