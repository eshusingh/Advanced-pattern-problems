#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++) // upper half
    {
        for (j = 0; j < (2 * n); j++)
        {
            if (i + j <= n - 1)
                cout << "*";
            else
                cout << " ";
            if (i + n <= j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++) // bottom half
    {
        for (j = 0; j < (2 * n); j++)
        {
            if (i >= j)
                cout << "*";
            else
                cout << " ";
            if (i >= (2 * n - 1) - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}