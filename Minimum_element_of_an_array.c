#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
    }
    b=arr[0];
    for(int j=1; j<a; j++)
    {
        c=arr[j];
        if(b>c)
        {
            b=c;
            
        }
    }
    printf("%d",b);
}