int fibonacciSeries(int a){
    if(a==1 || a==0)
    {   
        printf("1");
    }
    else{
        int ans = fibonacciSeries(a-1)+fibonacciSeries(a-2);
        printf("%d",ans);
    }
}