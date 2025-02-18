#include<stdio.h>
int main(){
    int a,c=2;
    scanf("%d %d",&a,&c);
    while(c<=a/2)
    {
        if(a%c==0)
        {
            printf("Not Prime");
            break;
            c++;
        }
        if(c>n/2)
        printf("Prime");
    }
    return 0;
}