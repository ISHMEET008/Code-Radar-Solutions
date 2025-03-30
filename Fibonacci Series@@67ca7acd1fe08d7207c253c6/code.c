int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int sum=1;
    
    if(n==1){
        printf("0");
        return 0;
    }
    printf("%d %d ",a,b);
    for(int i=1;i<n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}