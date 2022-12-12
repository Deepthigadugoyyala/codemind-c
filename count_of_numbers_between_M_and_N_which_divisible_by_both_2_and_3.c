#include<stdio.h>
void c(int M,int N,int i,int count);
int main()
{
    int M,N,i,count=0;
    scanf("%d%d",&M,&N);
    c(M,N,i,count);
}
void c(int M,int N,int i,int count)
{
    for(i=M;i<=N;i++)
    {
        if(i%2 == 0 && i%3 == 0)
        {
            count++;
        }
    }
    printf("%d",count);
}
