#include <iostream>
using namespace std;

double method(double price, double percent)
{
    double temp = 100 - percent;
    return price / temp * 100;
}
int main()
{
    double price;
    double percent;
    double Dis_money;

    cout << "eneter the price and percentage" << endl;
    cout << "Price: ";
    cin >> price;
    cout << "Percent: ";
    cin >> percent;
    Dis_money = method(price, percent);
    cout << "Item  that i purchased at price :" << price << " Rs." << endl
         << "Discount given BY Shop-keeper :" << percent << "%" << endl
         << "The Original Price :" << Dis_money << " RS." << endl
         << "The discounted money :" << Dis_money - price << " RS." << endl;
    return 0;
}