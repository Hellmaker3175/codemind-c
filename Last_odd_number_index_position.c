#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    b=a- 1;
    for (int i=b; i>=0; i--)
    {
        if (arr[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
    }
}