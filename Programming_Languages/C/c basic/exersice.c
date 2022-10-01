#include<stdio.h>
#include<string.h>
typedef struct driver
{
    char name[20];
    char DL_num[30];
    char Route[40];
    int Kms;
}driver;
void input(driver);

input(driver id)
{   
    
    printf("Enter Your Name\n");
    scanf("%s",&id.name);
    printf("Enter Your Licence Number\n");
    scanf("%s",&id.DL_num);
    printf("Route\n");
    scanf("%s",&id.Route);
    printf("Enter Kms\n");
    scanf("%d",&id.Kms);
    printf("Enter Your Name\n");
    scanf("%s",&id.name);
    printf("Enter Your Licence Number\n");
    scanf("%s",&id.DL_num);
    printf("Route\n");
    scanf("%s",&id.Route);
    printf("Enter Kms\n");
    scanf("%d",&id.Kms);
    printf("Enter Your Name\n");
    scanf("%s",&id.name);
    printf("Enter Your Licence Number\n");
    scanf("%s",&id.DL_num);
    printf("Route\n");
    scanf("%s",&id.Route);
    printf("Enter Kms\n");
    scanf("%d",&id.Kms);
     printf("1.%s   %s   %s  %d",id.name,id.DL_num,id.Route,id.Kms);
}

int main()
{  
    driver id;
    printf("Drivers information input panel\n");
    
    input(id);
    return 0;
}