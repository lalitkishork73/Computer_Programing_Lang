#include<iostream>
using namespace std;

typedef struct stark
{
    int id;
    char fav;
    float salary;
} stark;

typedef union starkmo
{
    int rice;
    char car;
    float pounds;
} starkmo;

enum month
{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
} month;

int main()
{   
   enum month m;
    m=feb;
    cout<<m<<endl;
    
    starkmo a;
    a.rice=34;
    cout<<a.rice<<endl;

    stark tony;  
    tony.id=33;
    tony.fav='a';
    tony.salary=33000;
    cout<<tony.id<<endl<<tony.fav<<endl<<tony.salary<<endl;
    return 0;
}