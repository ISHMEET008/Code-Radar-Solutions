// Your code here...
#include<stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp-cp>0){
        printf("Profit");
    }
    else if(sp==cp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}