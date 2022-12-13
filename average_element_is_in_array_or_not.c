#include<stdio.h>
int arr(int n,int s,int k);
int main()
{
    int n,s=0,k=0;
    scanf("%d",&n);
    int x=arr(n,s,k);
}
int arr(int n,int s,int k)
{
    int x[n],avg;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n;j++)
    {
        s=s+x[j];
    }
    avg=s/n;
    for(int h=0;h<n;h++)
    {
        if(avg==x[h])
        {
            printf("True");
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("False");
    }
    return 0;
}