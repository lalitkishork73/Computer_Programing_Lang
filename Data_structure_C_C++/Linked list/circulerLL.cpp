#include<iostream>
using namespace std;

class 
{
    public:
    int data;
    Node *next;
        
};

travarsal(Node *head)
{
    while(head->next=NULL)
    {
        cout << "Element :" << head->data;
        head = head->next;
    }
}

int main()
{
Node *one=one Node();
Node *two=two Node();
Node *three=three Node();
Node *four = four Node();

one->next = two;
two->next = three;
three->next = four;
four->next = one;

one->data = 25;
two->data = 33;
three->data = 66;
four->data = 99;

travarsal(one);

return 0;
}
