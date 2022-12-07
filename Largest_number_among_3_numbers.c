#include<stdio.h>
void l(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    l(a,b,c);
}
void l(int a,int b,int c)
{
    if(a>b)
    {
        printf("%d",a);
    }
   else if(b>c)
   {
       printf("%d",b);
   }
   else if(c>a)
   {
       printf("%d",c);
   }
}