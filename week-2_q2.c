#include<stdio.h>
void main()
{
    int i=0, n, sum1=0, sum2=0;
    for(i=0; i<10; i++)
    {
    printf("enter any integer: ");
    scanf("%d", &n);
    if(n%2==0)
    sum1 = n+sum1;
    else
    sum2 = n+sum2;
    }
    printf("sum of even integers are: %d", sum1);
    printf("\nsum of even integers are: %d", sum2);
}