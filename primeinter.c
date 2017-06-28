#include<stdio.h>

int main()
{
int i,flag,low,high;
    printf("\nEnter the two num");
    scanf("%d %d",&low,&high);
    printf("\nprint the number between %d and %d are:\n",low,high);
    
    while(low<high)
    {flag=0;    
for(i=2;i<=low/2;i++)
{
    
    if(low%i==0)
    {
        flag=1;
        break;
    }}
if((flag==0)&&((low!=0)&&(low!=1)))
{
printf(" %d",low);
   
}

 ++low;
    }     
    return 0;
}
