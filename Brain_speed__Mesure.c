#include<stdio.h>
int bsm(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int X=bsm(x,y);
}
int bsm(int x,int y)
{
    if(x<y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}