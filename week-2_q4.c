#include <stdio.h>
int main()
{
    int a, b, c, i, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci series: \n");
    for(i=1; i<=terms; i++)
    {
        printf("\n %d", c);
        a = b;    
        b = c;     
        c = a + b;
    }
    return 0;
}