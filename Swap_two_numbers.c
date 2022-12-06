#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=swap(a,b);
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d
%d",a,b);
    return 0;
}