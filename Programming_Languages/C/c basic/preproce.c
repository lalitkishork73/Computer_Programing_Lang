#include<stdio.h>
#include<stdlib.h>
// #include"array.c"
#define PI 3.14
#define SQUARE(r) r*r
int main()
{   
    printf("flie name %s\n",__FILE__); 
    printf("todays date is %s\n",__DATE__);
    printf("the time is %s\n",__TIME__);
    printf("the line no.is %d\n",__LINE__);
    printf("ANSI is %d\n",__STDC__);
    return 0;
}



// int main2()
// {
//     float var=PI;
//     int r=4;
//     int * ptr=functionDangling();
//     printf("the value of pi is%f\n",var);
//     printf("the area of this circle is %f\n",PI*SQUARE(r));
//     return 0;
// }