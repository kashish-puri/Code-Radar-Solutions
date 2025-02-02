#include <stdio.h>
int main(){
    char name[100],hobby[100];
    int age;
    scanf("%s %d",&name,&age);
    scanf("%s\n",&hobby);
    printf("Name: %s",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}