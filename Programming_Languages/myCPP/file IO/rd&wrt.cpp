#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="lalit-hu-bhai";
    string st2;
    // ofstream out("sample.txt");
    // out<<st;

    ifstream in("sample.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}