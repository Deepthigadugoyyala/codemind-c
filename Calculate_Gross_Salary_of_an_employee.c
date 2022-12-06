#include<stdio.h>
void gs(float basic,float hra,float da,float pf,float grosssalary);
int main()
{
    float basic,hra,da,pf,grosssalary;
    scanf("%f%f%f",&basic,&hra,&da);
    gs(basic,hra,da,pf,grosssalary);
}
void gs(float basic,float hra,float da,float pf,float grosssalary)
{
    pf=basic*12/100;
    grosssalary=basic+hra+da+pf;
    printf("%0.2f
%0.2f",pf,grosssalary);

}