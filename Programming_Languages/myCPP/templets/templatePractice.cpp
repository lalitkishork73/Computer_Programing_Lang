#include <iostream>
#include<string>
using namespace std; 

template <class T>
class Vector{
    
    public:
        T * arr;
        int size;
        Vector(int m){
            size = m;
            arr=new T[size];
        }

        T dotProd(Vector &v){
               T d=0;
               for(int i=0; i<size; i++){
                d+=this->arr[i]*v.arr[i];
               }
            return d;
        }

};

int main(){ 
    Vector <float>v1(3);
    v1.arr[0]=1.25;
    v1.arr[1]=2.4;
    v1.arr[2]=3.6;

    Vector <float>v2(3);
    v2.arr[0]=1.9;
    v2.arr[1]=2.3;
    v2.arr[2]=3.7;

    float a=v1.dotProd(v2);
    cout<<a<<endl; 
    return 0;
}