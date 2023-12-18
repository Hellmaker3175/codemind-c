#include<stdio.h>
int main()
{
    int a,b,c,found;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
        
    }
    scanf("%d",&c);
    
    for (int i=0; i<a; i++)
    {
        if (arr[i]==c)
        {
            found=1;
        }
        
    }
    if (found)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}