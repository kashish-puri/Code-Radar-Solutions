#include<stdio.h>
int main(){
    int a,i,is=1;
    scanf("%d",&a);
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        is++;
    }
    if(is==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}