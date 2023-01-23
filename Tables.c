#include<stdio.h>
int main()
{
    int n,m=10,i,s;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            s=i*n;
            printf("%d x %d = %d
",n,i,s);
        }
    }
}
