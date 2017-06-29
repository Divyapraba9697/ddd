#include<stdio.h>

int main()
{
    int num, temp, sum = 0, rem;
    printf("\nEnter a Number:\t");
    scanf("%d", &num);
    temp = num;
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if(sum == temp)
    {
        printf("\n%d is an Armstrong Number\n", temp);
    }
    else
    {
        printf("\n%d is not an Armstrong Number\n", temp);
    }
    return 0;
}
