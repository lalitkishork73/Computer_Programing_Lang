#include<stdio.h>
#include"inputfunc.c"
#include"displayfunc.c"
int addition(int*,int*);
int main()
{   int sum;
    intake();
    sum=addition(intake());
    displayint(sum);

    return 0;
}
 int addition(int *a,int *b)
 {
     int sum;
     sum=a+b;
     return sum;
     
 }