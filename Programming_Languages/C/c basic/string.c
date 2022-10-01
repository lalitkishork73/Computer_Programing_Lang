// #include<stdio.h>
// // int main()
// {
//     char s[15];
//     printf("ENTER THE NAME\n");
//     gets(s);
//     // int i;
//     // for (i=0;s[i]!='\0';i++)
//     // printf("%s",s);
//     puts(s);
    
//    return 0; 
    
// }
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
    //  char str[20];
    //  gets(str);
    //  printf("%s\n",str);
    //  puts(str);
    //  strrev(str);
     char s1[10],s2[10],s3[30];
    gets(s1);
    gets(s2);
    printf("%s is a friend of %s\n",s1,s2);
    strcpy(s3,strcat(s1,s2));
    printf("");
    puts(s3); 
    puts(strrev(s1));


}