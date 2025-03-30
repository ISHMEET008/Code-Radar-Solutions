int fibonacciseries(int a){
    if(a==1 || a==0)
    {   
        printf("1");
    }
    else{
        int ans = fibonacciseries(a-1)+fibonacciseries(a-2);
        printf("%d",ans);
    }
}