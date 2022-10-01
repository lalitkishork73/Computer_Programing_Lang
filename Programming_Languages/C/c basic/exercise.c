// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *ptr;
//     int n; 
//     printf("enter the number of character in your eId \n");
//     scanf("%d" ,&n);
//     ptr=ptr=(char*)realloc(ptr,n*sizeof(char));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value at %d of this array  \n",i); 
//         scanf("%s" ,&ptr[i]);
        
//     }
//     getchar();
    
//     for (int i = 0; i < n; i++)
//     {       
//         printf("enter the value at %d of this array is %s \n",i,&(ptr[i])); 
//         // scanf("%d" ,&ptr[i]);
//         free(ptr);
//     }
        
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
