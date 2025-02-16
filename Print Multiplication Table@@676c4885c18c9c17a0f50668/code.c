// Your code here...
#include<stdio.h>
int main(){
    int n,pro;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        pro=n*i;
        printf("%d x %d = %d\n",n,i,pro);
        // pro=n*i;
    }
    return 0;
}