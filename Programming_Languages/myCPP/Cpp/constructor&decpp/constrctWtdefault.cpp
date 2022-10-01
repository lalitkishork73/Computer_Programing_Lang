#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
void BankDeposit::show()
{
    cout << endl
         << "principal Amount was" << principal << endl
         << "Retrun Value after " << years << " is " << returnValue << endl;
}

int main()
{
    BankDeposit q1, q2, q3;
    int p, y;
    float r;
    int R;

    cout << "enter without percent" << endl;
    cin >> p >> y >> r;

    q1 = BankDeposit(p, y, r);
    q1.show();
    cout << "enter with percent" << endl;
    cin>>p>>y>>R;
    q2=BankDeposit(p, y, R);
    q2.show();

    return 0;
}