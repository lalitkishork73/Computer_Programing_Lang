#include<iostream>
using namespace std;

class lalit{
    public:
    int sum=0;
    int product=31;
    void func(int array[],int);
    void display()
    {
        cout<<"the sum is sum :"<<sum<<endl<<"the prduct is :"<<product<<endl;
    }

};

void lalit::func(int array[],int len){
    for (int i = 0; i < len; i++)
    {
        sum+=array[i];
    }
    for (int i = 0; i < len; i++)
    {
        product*=array[i];
    }
    
}
 
int main(){
    lalit out;
    int k;
    int arr[]={2,2,2};           
    out.func(arr,3);
    out.display();
  
    return 0;
}