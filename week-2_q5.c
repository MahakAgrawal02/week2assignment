#include<stdio.h>
void main()
{
    int i, j, a[10][10], b[10][10], c[10][10], d[10][10];
    printf("enter your first matrix: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }    


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          printf("%d ", a[i][j]);
        }
        printf("\n");
    }  


     printf("enter your second matrix: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          scanf("%d", &b[i][j]);
        }
    }    


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          printf("%d ", b[i][j]);
        }
        printf("\n");
    }    


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        }
    }


    printf("the sum of the matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          printf("\t %d", c[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          d[i][j]=a[i][j]*b[i][j];
        }
    }

    
    printf("the multiplication of the matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          printf("\t %d", d[i][j]);
        }
        printf("\n");
    }
}
