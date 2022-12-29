#include<stdio.h>
int tour(int t,int n,int m);
int main()
{
    int t,n,m;
    scanf("%d",&t);
    int x=tour(t,n,m);
}
int tour(int t,int n,int m)
{
    while(t)
    {
        scanf("%d%d",&n,&m);
        printf("%d
",n*5+m*7);
        t--;
    }
    return 0;
}