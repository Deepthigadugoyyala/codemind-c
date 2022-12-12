#include<stdio.h>
void fac(int n,int i,int s);
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    fac(n,i,s);
}
void fac(int n,int i,int s)
{
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    printf("%d ",s);
}
