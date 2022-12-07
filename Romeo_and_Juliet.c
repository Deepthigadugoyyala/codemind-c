#include<stdio.h>
int rj(int X,int Y,int Z,int n);
int main()
{
    int X,Y,Z,n;
    scanf("%d%d%d",&X,&Y,&Z);
    int x=rj(X,Y,Z,n);
}
int rj(int X,int Y,int Z,int n)
{
    n=(5*X+10*Y)/Z;
    printf("%d",n);
    return 0;
}