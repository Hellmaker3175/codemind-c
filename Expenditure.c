#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a/30;
    if (c>=b)
    {
        printf("YES");
    }
    else if(c<b)
    {
        printf("NO");
    }
}