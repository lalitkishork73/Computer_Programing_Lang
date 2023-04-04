#include <iostream>
using namespace std;

class metro
{
public:
    int a;
    int b;
    metro(int x, int y)
    {
        a = x;
        b = y;
    }
    int sum()
    {
        int c = this->a + this->b;
        return c;
    }
};

/* int main()
{
    metro v1(4, 5);
    int b = v1.sum();
    cout << b << endl;
    return 0;

} */

// it is not good practice
// create h file for it
