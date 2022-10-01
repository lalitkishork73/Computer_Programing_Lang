#include <iostream>
using namespace std;

class employe
{


    public:
    int id;
        float salary;
        employe(){}
        employe(int inpid)
        {
            id = inpid;
            salary = 34000.0;
        }
};
class programer:public employe{
    public:
        programer(int inpid)
        {
            id=inpid;
        }
        int languageCode=9;
        void getData(){
            cout<<id;
        }
};
int main()
{   
    employe lalit(55), stark(150);
    cout << "1:" << lalit.salary << endl;
    cout << "2:" << stark.salary << endl;
    programer skillF(19);
    cout << "3:" << skillF.id << endl;
    cout << "3:" << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}