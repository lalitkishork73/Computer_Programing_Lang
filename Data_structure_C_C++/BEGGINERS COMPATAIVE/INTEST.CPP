#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int p = 0;
    while (n--)
    {   
        int ti;
        cin >> ti;
        if (ti % k == 0)
        {
            p++;
        }
    }
    cout << p;
    return 0;
}