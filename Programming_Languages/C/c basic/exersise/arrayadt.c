   #include<stdio.h>
#include<stdlib.h>
typedef struct myArray
{
   int total_size;
   int used_size;
   int *ptr;
}myArray;

void createarray(myArray *p, int tSize, int uSize){
    p->total_size=tSize;
    p->used_size=uSize;
    p->ptr=(int *)malloc(tSize*sizeof(int));
}

void show(myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
void setVal(myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {   
        printf("enter element %d\n",i);    
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}

int main()
{
    myArray marks;
    createarray(&marks,10,5);
    printf("we are runnig setVal now\n");
    setVal(&marks);
    printf("we are running Show now\n");
    show(&marks);

    return 0;
}