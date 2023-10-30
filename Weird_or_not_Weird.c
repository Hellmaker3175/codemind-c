#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%2;
    if (b!=0)
    {
        printf("weird");
    }
    if (a>=2 && b==0 && a<=5)
    {
        printf("not weird");
        
    }
    if (a>=6 && b==0 && a<=20)
    {
        printf("weird");
    }
    else if(b==0 && a>20)
    {
        printf("not weird");
    }
}