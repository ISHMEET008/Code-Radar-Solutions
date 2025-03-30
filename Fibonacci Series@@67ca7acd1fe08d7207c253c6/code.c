int finonacciseries(int a){
    if(a==1 || a==0)
    {   
        printf("1");
    }
    else{
        int ans = finonacciseries(n-1)+finonacciseries(n-2);
        printf("%d",ans);
    }
}