#include<stdio.h>
int main()
{
     int a1,a2;
     float a3,a4;
     scanf("%d%d",&a1,&a2);
     scanf("%f%f",&a3,&a4);
     printf("%d %d
",a1+a2,a1-a2);
     printf("%0.1f %0.1f",a3+a4,a3-a4);
     return 0;
}