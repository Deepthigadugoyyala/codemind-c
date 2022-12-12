#include<stdio.h>
void patt(int i,int j,int n);
int main()
{
    int i,j,n;
    scanf("%d",&n);
    patt(i,j,n);
}
void patt(int i,int j,int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
}