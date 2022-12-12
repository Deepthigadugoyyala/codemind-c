#include<stdio.h>
int lcm(int n1,int n2,int max);
int main()
{
    int n1,n2,max;
    scanf("%d%d",&n1,&n2);
    int x=lcm(n1,n2,max);
}
int lcm(int n1,int n2,int max)
{
    max = (n1 > n2) ? n1 :n2;
    while (1)
    {
        if ((max % n1 == 0) && (max % n2 ==0))
        {
            printf("%d",max);
            break;
        }
        ++max;
    }
    return 0;
}
