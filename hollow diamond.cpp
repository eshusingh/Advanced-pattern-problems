#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    k=n/2+1;
  
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==k || j==n-k+1)
            cout<<"*";
            else
            cout<<" ";
        }
        if(i<=n/2)
        k--;
        else
        k++;
        cout<<endl;
    }
    return 0;
}