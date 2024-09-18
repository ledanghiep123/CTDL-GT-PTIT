#include<bits/stdc++.h>
using namespace std;

int a[11],n;

void print(int m)
{
    cout<<"[";
    for(int i=1;i<=m;i++)
    {
        if(i==m) cout<<a[i];
        else cout<<a[i]<<" ";
    } 
    cout<<"]";
    cout<<"\n";
}

void tryAt(int n)
{
    print(n);
    for(int i=1;i<n;i++) a[i]+=a[i+1];
    if(n-1) tryAt(n-1);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        tryAt(n);
    }
}
