// Your code here...
#include<stdio.h>
int main(){
    char marks;
    scanf("%c",&marks);
    switch(marks){
        case "A":
        printf("Excellent");
        break;
        case "B":
        printf("Good");
        break;
        case "C":
        printf("Average");
        break;
        case "D":
        printf("Below Average");
        break;
        case "F":
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}