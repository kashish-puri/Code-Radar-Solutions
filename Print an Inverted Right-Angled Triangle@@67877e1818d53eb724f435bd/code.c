#include<stdio.h>
int main(){
    int N,i,J;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(J=i;J>=1;J--)
        {
            printf("*");
        }
    printf("\n")
    }
    return 0;
}