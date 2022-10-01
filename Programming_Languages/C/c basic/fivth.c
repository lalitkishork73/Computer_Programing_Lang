// #include<stdio.h>
// void global (void);
// int x=10;
// int main()
// {
//     global();
//     printf("%d",x);

//     return 0;
// }
// void global(void)
// {
//     printf("%d\n",x);

// }
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=34, b=74;
    printf("%d and %d \n",a,b);
    swap(&a,&b);
    printf("%d and %d\n",a,b);
    return 0;
}
void swap(int *a, int *b)
{
    
    *a=*a+*b;
    *b=*b-*a;
     
}

  