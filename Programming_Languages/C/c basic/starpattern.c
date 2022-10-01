// #include<stdio.h> 
// int main()
// {
    
//     for(int i=0;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//             {
//                 printf("*",j);
//             }
//             printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
void reversestarpattern(int);
void starpattern(int);
void starpattern(int rows)
{
    for (int i=0;i<=rows;i++)
    {
        for (int j=0;j<=i;j++)
        {
           printf("0");
        }
        printf("\n");
        
    }
}

void reversestarpattern(int rows)
{
    
    for (int i=0;i<=rows;i++)
    {
        for (int j=0;j<=rows-i-1;j++)
        {
           printf("o");
        }
        printf("\n");
        
    }
    
}

int main()
{
    int rows,type;

    printf("1.star pattern\n2.Reverse star pattern\n choose the type= ");
    scanf("%d",&type);
    printf("how many rows do you wants?\n ");
    scanf("%d",&rows);
    switch (type)
    {
    case 1:
        starpattern(rows);    
        break;
    case 2:
        reversestarpattern(rows);  
        break;
    
    default:
        printf("not valid choice");
        break;
    }
    
    return 0;
}