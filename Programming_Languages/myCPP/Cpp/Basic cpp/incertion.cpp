#include<iostream>
using namespace std;

class myArray
{

    int total_size,used_size,*ptr;
public:
    void createarray(myArray *p, int tSize, int uSize);
    void show(myArray *a){
        for (int i = 0; i < a->used_size; i++)
        {
            cout<<((a->ptr)[i])<<endl;
        }
    
    }
    void setVal(myArray *a){
        int n;
        for (int i = 0; i < a->used_size; i++)
        {   
            cout<<"enter element"<<i<<endl;    
            cin>>n;
            (a->ptr)[i]=n;
        }
    
    }
};

void myArray:: createarray(myArray *p, int tSize, int uSize){
    p->total_size=tSize;
    p->used_size=uSize;
    p->ptr=(int*)malloc(tSize*sizeof(int));
}

int main()
{
    myArray marks;
    marks.createarray(&marks,18,5);
    cout<<"we running setVal"<<endl;
    marks.setVal(&marks);
    cout<<"we running show"<<endl;
    marks.show(&marks);
    return 0;
    
}