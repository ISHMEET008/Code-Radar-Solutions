#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            count_even=count_even+1;
        }
        else{
            count_odd=count_odd+1;
        }
    }
    printf("%d ",count_even);
    printf("%d",count_odd);
    return 0;
}