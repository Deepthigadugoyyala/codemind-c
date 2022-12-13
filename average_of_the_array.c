#include<stdio.h>
int main()
{
    int n,i,s=0;
    float avg;
    scanf("%d",&n);
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