#include<stdio.h>
int main(){
    char op;
    int a,b,c;
    scanf("%c",&op);
    scanf("%d %d",&a,&b);
    switch(op){
        case '+':
        c=a+b;
        printf("%.2f",c);
        break;
        case '-':
        c=a-b;
        printf("%.2f",c);
        break;
        case '*':
        c=a*b;
        printf("%.2f",c);
        break;
        case '/':
        c=a/b;
        printf("%.2f",c);
        break;
    }
    return 0;
}