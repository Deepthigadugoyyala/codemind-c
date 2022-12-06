#include<stdio.h>
int gs(float basic,float hra,float da,float pf,float grosssalary);
int main()
{
    float basic,hra,da,pf,grosssalary;
    scanf("%f%f%f",&basic,&hra,&da);
    int x=gs(basic,hra,da,pf,grosssalary);
}
int gs(float basic,float hra,float da,float pf,float grosssalary)
{
    pf=basic*12/100;
    grosssalary=basic+hra+da+pf;
    printf("%0.2f
%0.2f",pf,grosssalary);
    return 0;
}