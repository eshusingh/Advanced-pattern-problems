#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        int k=i;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=n;j++)
        {
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}