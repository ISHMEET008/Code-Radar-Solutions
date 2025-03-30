int fibonacciSeries(int a){
    int a=0;b=1;sum=1;
    printf("%d %d",a,b);
    for(int i=1;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    return 0;
}