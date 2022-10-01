#include<stdio.h>
enum boolean iseven(int);
void main()
{
    int n;
    enum boolean x;
    printf("enter the number");
    scanf("%d",&n);
    x=iseven(n);
    if(x==true)
        {
            printf("EVEN");
        }
    else
        {
            printf("ODD");
        } 

}
enum boolean
{
    false,true
};
enum boolean iseven(int x)
{
    if(x%2==0)
        {
            return(true);
        }
    else
        {
            return(false);
        } 
}
