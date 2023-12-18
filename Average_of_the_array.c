#include<stdio.h>
int main()
{
    int a;
    float b=0.0,c;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
        b=b+arr[i];
        
    }
    c=b/a;
    printf("%.2f",c);
}