#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     if(i%2!=0)
     {
         printf(" %d odd number",i);
     }
    }

return 0;
}
