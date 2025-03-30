int finonacciseries(int a){
    if(a==1 || a==0)
    {   
        printf("1");
    }
    else{
        int ans = finonacciseries(a-1)+finonacciseries(a-2);
        printf("%d",ans);
    }
}