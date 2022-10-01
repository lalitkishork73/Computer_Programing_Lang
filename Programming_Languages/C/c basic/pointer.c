// #include <stdio.h>
// int main()
// {
//     int *ptr,x;
//     ptr=&x;
//     *ptr=90;
//     printf("%d\n",ptr);
//     printf("%d",x);
//     return 0;

// }


// pointer with array
// #include<stdio.h>
// void input(int *);
// void display(int *);
// void sort(int *);

// int main()
// {
//     int a[10];
//     input(a);
//     sort(a);
//     display(a);
//     return 0;

// }
// void input(int *p)
// {
//     int i;
//     for(i=0;i<=4;i++)
//         {
//             scanf("%d",p+i);
//         }
// }
// void display(int *p)
// {
//     int i;
//     for(i=0;i<=4;i++)
//         {
//             printf("%d",*(p+i));
//     }    
// }
// void sort(int *p)
// {
//      int i,o,t;
//      for(i=1;i<=4;i++)
//         {
//             for(o=0;o<=4;o++)
//                 {
//                     if(*(p+i)>*(p+i+1))
//                         {
//                             t=*(p+i);
//                             *(p+i)=*(p+i+1);
//                             *(p+i+1)=t;

//                         }
//                 }
//         }
// }

// pointer with string
#include<stdio.h>
#include<string.h>
char* reverse(char*);
int length(char*);
 
 char* reverse(char *p)
 {
     int l,i;
     char t;
     for(l=0;*(p+l)!='\0';l++);
        for(i=0;i<l/2;i++)
            {
                t=*(p+i); 
                *(p+i)=*(p+l-1-i);
                *(p+l-1-i)=t;
            }
        return(p);
 }
 int length(char *p)
 {
     int i;
     for (i=0;*(p+i)!='\0'; i++);
    return(i);
 }
 int main()
{
   char a[20];
   gets(a);
    printf("%d\n",length(a));
    printf("%s",reverse(a));
    return 0;    
}
// 
//  #include<stdio.h>
//  int main()
//  {
//     // int a=34;
//     // int *ptr=&a;
//     // printf("%d\n",a);
//     // printf("%d\n",*ptr);
//     // printf("%d\n",ptr);
//     // printf("%d\n",&a);
//     int arr[]={1,2,3,4,5,6,7};
//     // printf("%d",arr[5]); 
//     int *ptr;
//     ptr=&arr;
//     printf("%d\n",*(ptr+2));
//     printf("%d\n",arr[2]);
//     printf("%d\n",&arr[2]);
//     printf("%d\n",(ptr+2));
//     printf("%d\n",*(ptr--));
//     return 0;
//  }