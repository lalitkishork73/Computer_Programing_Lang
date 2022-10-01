#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int sum = 0;
        while (t != 0)
        {
            int r = t % 10;
            sum += r;
            n /= 10;
        }
        cout << sum << endl;
    }
}