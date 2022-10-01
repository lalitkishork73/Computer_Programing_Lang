// table
#include<stdio.h>
void table(int*);
int main()
{   
    int x;
    printf("Enter the number for Requred Table=\a");
    scanf("%d",&x);
    table(x);
    return 0;
}

void table(int *t)
{
     int i,c;
     c=&*t;
    for(i=1;i<=10;i++)
        {
            printf("%dX%d=%d\n",c,i,c*i);
        }
}