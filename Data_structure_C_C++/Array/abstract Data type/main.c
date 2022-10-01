#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
void lalit(int (*point)(int, int))
{
    printf("goodmornig lalit\n");
    printf("the sum is %d\n", point(4, 5));
}
int main()
{
    // int x,y,c;
    // printf("enter a & b\n");
    // scanf("%d%d",&x,&y);
    int (*ptr)(int, int);
    
    ptr = sum;

    lalit(ptr);
    return 0;
} 