// #include<stdio.h>
// int main()
// {
//     int a[10],i,sum=0;
//     float avg;
//     printf("enter te number of all =");
//     for(i=0;i<=9;i++)
//         {
//         scanf("%d",&a[i]);
//         }

//     for(i=0;i<=9;i++)
//     {
//         sum=sum+a[i];
//         avg=sum/10.0;
//         printf("the sum of 10 numbers is=%f",avg);
//     } 
// }

// TWO DIMENTIONAL ARRAY

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the 9 numbers of A=");
    for(i=0;i<=2;i++)
        {for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }}
    printf("Enter the 9 numbers of B=");
    for(i=0;i<=2;i++)
        {for (j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }}
        printf("Enter the 9 numbers=");
    for(i=0;i<=2;i++)
        {for (j=0;j<=2;j++)
        {   
            c[i][j]=a[i][j]+b[i][j];
            printf("C=%d",c[i][j]);}
        printf("\n");}
    return 0;
        }        
    