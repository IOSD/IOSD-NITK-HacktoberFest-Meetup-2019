#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ma=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ma=max(ma,a[i]);
    }
    cout<<ma;
}
