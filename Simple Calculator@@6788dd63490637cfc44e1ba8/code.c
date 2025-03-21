#include<stdio.h>
int main(){
    char op;
    int a,b,c;
    scanf("%c",&op);
    scanf("%d %d",&a,&b);
    switch(op);
    case '+':
    c=a+b;
    printf(c);
    break;
    case '-':
    c=a-b;
    printf(c);
    break;
    case '*':
    c=a*b;
    printf(c);
    break;
    case '/':
    c=a/b;
    printf(c);
    break;
    default:
    printf("Invalid Operation");

}