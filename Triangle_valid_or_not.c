#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    printf("Valid triangle");
    else
    printf("Invalid triangle");
    
    
}