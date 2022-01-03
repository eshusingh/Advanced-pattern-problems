#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int rows;
    cin>>rows;
    int k=1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(k==1)
            cout<<k--<<" ";
            else
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}