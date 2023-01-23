#include<stdio.h>
int main()
{
    int n,m,i,s;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        s=n*i;
        printf("%d x %d = %d
",n,i,s);
    }
}