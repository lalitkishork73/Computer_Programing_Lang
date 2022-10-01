// #include<stdio.h>
// struct date
// {
//     int d,m,y;
// };

// int main()
// {
//     float x;
//     struct date today,d1;
//     today.d=26;
//     today.m=7;
//     today.y=1996;
//      printf("Date:%d/%d/%d\n",today.d,today.m,today.y);
//      d1=today;
//      printf("Date:%d/%d/%d\n",d1.d,d1.m,d1.y);
//      printf("enter today's date\n");
//      scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
//      printf("\nDate:%d/%d/%d\n",d1.d,d1.m,d1.y);
//      return 0;

// }
// #include<stdio.h>
// struct book input(void);
// void display(struct book);
// struct book input()
//  {
//     struct book a;
//     printf("enter the bookid\n title\n price\n");
//     scanf("%d",&a.bookid);
//     fflush(stdin);
//     gets(a.title);
//     scanf("%f",&a.price);
//     return a;
// }
// void display(struct book x)
//     {
//      printf("\n%d-%s-%f",x.bookid,x.title,x.price);
//     }
// struct book
// {
//     int bookid;
//     char title[20];
//     float price;
// }a;
// int main()
// {
//     struct book b1;
//     b1=input();
//     display(b1);
//     return 0;
// }

#include <stdio.h>
typedef struct student
{
    int id;
    float marks;
    char fav_char;
} student;

int main()
{
    student lalit, evans, tony;
    lalit.id = 01;
    evans.id = 02;
    tony.id = 03;
    lalit.marks = 73;
    evans.marks = 53;
    tony.marks = 72;
    lalit.fav_char = 'L';
    evans.fav_char = 'A';
    tony.fav_char = 'I';
    printf("id=%d Lalit Marks=%f favorait character=%c\n", lalit.id, lalit.marks, lalit.fav_char);
    printf("id=%d Evans Marks=%f favorait character=%c\n", evans.id, evans.marks, evans.fav_char);
    printf("id=%d Tony  Marks=%f favorait character=%c\n", tony.id, tony.marks, tony.fav_char);
    return 0;
}
 