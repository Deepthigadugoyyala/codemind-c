#include<stdio.h>
int multi(int N,int M,int i,int count);
int main()
{
    int N,M,i,count=0;
    scanf("%d%d",&M,&N);
    int x=multi(N,M,i,count=0);
}
int multi(int N,int M,int i,int count)
{
    for(i=M;i<=N;i++)
    {
        if(i%3 == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
