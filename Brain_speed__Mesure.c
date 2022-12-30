#include<stdio.h>
void bsm(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    bsm(x,y);
}
void bsm(int x,int y)
{
    if(x<y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}