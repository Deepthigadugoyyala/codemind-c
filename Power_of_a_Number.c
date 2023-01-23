#include<stdio.h>
#include<math.h>
int main()
{

    int x,y,m,a,d;
    scanf("%d%d%d",&x,&y,&m);
    a=pow(x,y);
    d=a%m;
    printf("%d",d);
}