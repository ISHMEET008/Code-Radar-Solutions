#include <stdio.h>
int main(){
    int age;
    char a[100];
    char b[100];
    scanf("%s %d %s",&a,&age,&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",b);
    return 0;
}