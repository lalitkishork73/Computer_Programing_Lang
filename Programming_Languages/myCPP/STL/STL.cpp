#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<endl;
    }
    cout<<endl;
    
}
int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 5; i++)
        {
            cout<<"enter the element to add to this vector"<<endl;
            cin>>element;
            vec1.push_back(element);
            
        }
        // vec1.pop_back();
        // vec1.pop_back();
        // vec1.pop_back();
        // vec1.pop_back();
        display(vec1);
        vector<int> :: iterator iter=vec1.begin();
        vec1.insert(iter+2,200,555);
        display(vec1);
    
    return 0;
}