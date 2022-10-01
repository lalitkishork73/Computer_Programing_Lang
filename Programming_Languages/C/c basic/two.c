#include <stdio.h>
int main()
{   int a,b,c;
    printf("1.addtion\n");
    printf("2.odd-even\n");
    printf("3.printing 5 lalit\n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
            printf("enter two numbers");
            scanf("%d",&a);
            scanf("%d",&b);
            printf("sum of two numbers=%d",a+b);

    break;
    case 2:
        printf("enter the number");
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("even number");
        }
        else
        {
            printf("odd number");
        }
    break;
    case 3:
        printf("enter the number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
            {
                printf("%d",b);
            }    
    break;           
        
    default:
        printf("invalid choice");
        break;
    }
    return 0;
}
