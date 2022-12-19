#include<stdio.h>
int div(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=div(a,b);
}
int div(int a,int b)
{
    printf("%d",a/b);
    return 0;
}