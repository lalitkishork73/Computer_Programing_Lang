#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream out;
    // out.open("sample.txt");
    // out<<"this is me this is me also with power stone";
    // out.close();

    ifstream in;
    string st;
    in.open("sample1.txt");
    // in>>st;
    // cout<<st;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st;
    }
    
    in.close();
    return 0;
}