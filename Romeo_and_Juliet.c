#include<stdio.h>
void rj(int X,int Y,int Z,int n);
int main()
{
    int X,Y,Z,n;
    scanf("%d%d%d",&X,&Y,&Z);
    rj(X,Y,Z,n);
}
void rj(int X,int Y,int Z,int n)
{
    n=(5*X+10*Y)/Z;
    printf("%d",n);
}