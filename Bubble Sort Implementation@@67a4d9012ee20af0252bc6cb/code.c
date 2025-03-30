int bubblesort(arr[]){
for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
}
for(int j=0;j<n;j++){
    printf("%d ",arr[j]);
}
return 0;
}