#include<stdio.h>
void arr(int n,int i,int max);
int main()
{
    int n,i,max;
    scanf("%d",&n);
    arr(n,i,max);
}
void arr(int n,int i,int max)
{
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    max=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]>max)
        max=x[i];
    }
    printf("%d",max);
}