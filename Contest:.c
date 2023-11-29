#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    d=b;
    e=2*c;
    f=d+e;
    if (f>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}