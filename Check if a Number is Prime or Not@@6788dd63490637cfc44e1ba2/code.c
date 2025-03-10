#include<stdio.h>
int main(){
    int n,c=2;
    scanf("%d",&n);
    while(c<=n/2)
    {
        if(n%c==0){
        printf("Not Prime");
        break;
        }
        c++;
    }
        if(c>n/2);{
        printf("Prime");
        }
    return 0;

}