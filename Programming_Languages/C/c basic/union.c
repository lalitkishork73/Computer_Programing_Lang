#include<stdio.h>
#include<string.h>
union logo
{
    int x;
    float y;
    char z;
    char w[]


};
int main()
{
    union logo i1;
    i1.x=5;
    printf("\nx=%d",i1.x);
    i1.y=3.5;
    printf("\ny=%f",i1.y);
    i1.z='c';
    printf("\nz=%c",i1.z);
    return 0;
    
}


