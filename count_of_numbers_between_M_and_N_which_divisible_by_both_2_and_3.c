#include<stdio.h>
int c(int M,int N,int i,int count);
int main()
{
    int M,N,i,count=0;
    scanf("%d%d",&M,&N);
    int x=c(M,N,i,count);
}
int c(int M,int N,int i,int count)
{
    for(i=M;i<=N;i++)
    {
        if(i%2 == 0 && i%3 == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
