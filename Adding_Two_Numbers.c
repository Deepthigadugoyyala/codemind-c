#include<stdio.h>
int add(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=add(a,b);
}
int add(int a,int b)
{
    printf("%d",a+b);
    return 0;
}