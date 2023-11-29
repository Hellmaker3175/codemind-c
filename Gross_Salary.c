#include<stdio.h>
int main()
{
    float b,c,d,e,f,g,h;
    int a;
    scanf ("%d",&a);
    b=(80*a)/100;
    c=(20*a)/100;
    e=(90*a)/100;
    f=(25*a)/100;
    g=(95*a)/100;
    h=(30*a)/100;
    if(a<=10000)
    {
        printf("%.2f",a+b+c);
    }
    else if(a<=20000)
    {
        printf("%.2f",a+e+f);
    }
    else if(a>20000)
    {
        printf("%.2f",a+g+h);
    }
}