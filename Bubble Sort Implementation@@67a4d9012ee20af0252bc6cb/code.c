int bubbleSort(int a[],int n){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // int a[n];
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
    if(a[j]>a[j+1]){
        int temp = a[j];
        a[j]=a[j+1];
        a[j+1]=temp;}

    }
}}
void printArray(int a[],int n){
for(int j=0;j<n;j++){
    printf("%d ",a[j]);
}
return ;
}