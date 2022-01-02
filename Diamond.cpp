// code to print a solid diamond
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // upper half
    {
        int j = 1;
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (; j <= n + i - 1; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 5; i >= 1; i--) // lower half
    {
        int k = 1;
        for (k = 1; k < n - i + 1; k++)
            cout << " ";
        for (; k <= n + i - 1; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}