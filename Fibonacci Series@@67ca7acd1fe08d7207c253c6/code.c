int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int sum=1;
    printf("%d %d ",a,b);
    for(int i=1;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}