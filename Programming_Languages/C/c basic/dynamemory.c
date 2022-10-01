// #include<stdio.h>
// void malloca(void);
// void calloca(void);
// void realloca(void);
// int main()
// {   
//     malloca();
//     calloca();
//     realloc();
//     return 0;
    
// }
// void malloca()
// {
//     float *p;
//     p=malloc(4);
//     *p=3.5;
//     printf("%f",*p);
// }
// void calloca()
// {
//     int *p;
//     p=calloc(5,2);
//     *(p+0)=2;
//     *(p+1)=25;
//     *(p+2)=10;
//     *(p+3)=16;
//     *(p+4)=12;
//     printf("\n%d\n",*(p+0));
//     printf("%d\n",*(p+1));
//     printf("%d\n",*(p+2));
//     printf("%d\n",*(p+3));
//     printf("%d\n",*(p+4));
// }
// void realloca()
// {
//     double *q;
//     q=realloc(*q,4);
//     *q=250.250;
//     printf("\n%lu",*q);

// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the number that you wants\n");
    scanf("%d" ,&n);
    // see of malloc
    // ptr=(int*) malloc(10*sizeof(int));
    // ptr=(int*) calloc(n,sizeof(int)); calloc
    
    for (int i = 0; i < n; i++)
    {       
        printf("enter the value at %d of this array  \n",i); 
        scanf("%d" ,&ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {       
        printf("enter the value at %d of this array is %d \n",i,ptr[i]); 
        // scanf("%d" ,&ptr[i]);
    }
    printf("enter the number that you wants\n");
    scanf("%d" ,&n);
    // see of malloc
    // ptr=(int*) malloc(10*sizeof(int));
    // ptr=(int*) calloc(n,sizeof(int)); calloc
    ptr=(int*)realloc(ptr,n*sizeof(int));

    for (int i = 0; i < n; i++)
    {       
        printf("enter the value at %d of this array  \n",i); 
        scanf("%d" ,&ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {       
        printf("enter the value at %d of this array is %d \n",i,ptr[i]); 
        // scanf("%d" ,&ptr[i]);
    }
    
    return 0;
}



































































