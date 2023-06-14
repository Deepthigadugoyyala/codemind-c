#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||i==n-1||j==0||j==m-1)
            {
                s=s+x[i][j];
            }
        }
    }
    printf("%d",s);
}