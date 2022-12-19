#include<stdio.h>
int mod(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=mod(a,b);
}
int mod(int a,int b)
{
    printf("%d",a%b);
    return 0;
}