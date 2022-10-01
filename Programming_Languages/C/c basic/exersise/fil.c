#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    char string[34];
    fp=fopen("tut.txt","r");
    fscanf(fp,"%s",string);
    printf("the content of this file has %s\n",string);
    // fclose(fp);
    return 0;
}