#include <stdio.h>
int main(){
    int age;
    char a[100];
    char b[100];
    scanf("%s %d %s",&a,&age,&b);
    printf("Name: %s",a);
    printf("Age: %d",age);
    printf("Hobby: %s",b);
    return 0;
}