#include<stdio.h>
void N(int i,int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    N(i,n);
}
void N(int i,int n)
{
    for(i=1;i<=n;i++)
    {
            printf("%d ",i*3);
    }
    
}
