#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, Mark, max_Marks, sum = 0, change = 0;
    cin >> n >> k;
    int marks[n];

    if (k < 100)
    {
        max_Marks = n * 10;
    }
    else if (k > 100 && k < 1000)
    {
        max_Marks = n * 100;
    }

    Mark = max_Marks / n;

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        sum = sum + marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (marks[i] != Mark)
        {
            if (sum <= k)
            {
                marks[i] = Mark;
                change++;
            }
            else
            {
                break;
            }

            sum = sum + marks[i];
        }
    }

    if (change == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}