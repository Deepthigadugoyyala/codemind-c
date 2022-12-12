#include<stdio.h>
int main()
{
    int N,M,i,count=0;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%3 == 0)
        {
            count++;
        }
    }
    printf("%d",count);
}
