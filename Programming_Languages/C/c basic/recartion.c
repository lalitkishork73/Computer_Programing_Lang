// #include<stdio.h>
// int main()
// {   int fun(int);
//     int k;
//     k=fun(5);
//     printf("%d",k);
// }
// int fun(int a) 
// {
//     int s;
//     if(a==1||a==0)
//     return a;
//     s=a*fun(a-1);
//     return s; 
// recurtion of fobinacci
// #include<stdio.h>
// int main()
// // }
// {
//     int number;
//     printf("enter the index to get fibonacci series\n");
//     scanf("%d",&number);
//     printf("the value of the fibonacci no.%d\n",fib_iterative(number));
//     printf("the value of the fibonacci no.%d\n",fib_recursive(number));
//     return 0;

// }
//  int fib_iterative(int n)
//     {   
//        int a=0,b=1;
//        for(int i=0;i<=n-1;i++)
//             {
//                 b=a+b;
//                 a=b-a;
//             }

//         return a;
    
//     }
//     int fib_recursive(int n)
//     {   
//          if(n==1||n==2)
//             {
//                 return n-1;
//             }
//         else
//             {
//                 return fib_iterative(n-1)+fib_iterative(n-2);
//             }    
//         return 0;
//     }

  