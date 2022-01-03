#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        int k=j;
        for(;j<n+k;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}