#include<stdio.h>
void arr(int n,int i,int s);
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    arr(n,i,s);
}
void arr(int n,int i,int s)
{
    float avg;
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+x[i];
    }
    avg=(float)s/n;
    printf("%0.2f",avg);
}