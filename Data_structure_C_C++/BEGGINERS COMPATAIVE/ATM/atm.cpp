#include <iostream>
using namespace std;

int main()
{
    double balance;
    int amount;
    cin >> amount>>balance;
    if (amount % 5 == 0 && ((amount + 0.50) <= balance))
    {
        cout<<balance - amount - 0.50;
    }
    else
    {
        cout << balance;
    }
    return 0;
}