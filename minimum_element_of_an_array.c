#include<stdio.h>
int main()
{
    int n,i,min;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    min=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]<min)
        min=x[i];
    }
    printf("%d",min);
}