#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++)
        {

            if (k >= A[i] || k == A[i])
            {
                k = k - A[i];
                A[i] = 1;
            }
            else
            {
                A[i] = 0;
            }
            cout << A[i];
        }
        cout<<endl;
    }

    return 0;
}