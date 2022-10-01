#include <iostream>
using namespace std;

int main()
{
    /* intialize */
    int n, k = 1, max = 0;
    cin >> n;
    int t = n * 2;
    int Rows[n], Columns[n], mArr[t], arr[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Rows&Columns" << endl;
    for (int i = 1; i <= n; i++)
    {
        Rows[i] = (arr[i][1] * 100) +
                  (arr[i][2] * 10) +
                  (arr[i][3] * 1);

        Columns[i] = (arr[1][i] * 100) +
                     (arr[2][i] * 10) +
                     (arr[3][i] * 1);
    }

    for (int i = 1; i <= t; i++)
    {
        if (i > 3)
        {
            mArr[i] = Columns[k];
            k++;
        }
        else
        {
            mArr[i] = Rows[i];
        }
        cout << mArr[i] << endl;
        if (mArr[i] > max)
        {
            max = mArr[i];
        }
    }
    cout << "Amarjeet This is Largest number : " << max;
    return 0;
}
