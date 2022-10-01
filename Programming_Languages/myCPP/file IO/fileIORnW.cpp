#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream lalit("sample.txt");
    // cout<<"enter ka bey man ki baat modi"<<endl;
    // string name;
    // cin>>name;
    // lalit<<name;
    // lalit.close();

    ifstream lalit("sample1.txt");
    string content;
    lalit>>content;
    getline(lalit,content);
    cout<<content;
    lalit.close();
    return 0;
}