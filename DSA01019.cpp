#include<bits/stdc++.h>
using namespace std;

int a[17],n;

void print()
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0) cout<<'H';
        else cout<<'A';
    }
    cout<<"\n";
}

void tryAt(int i)
{
    if(i == 1)
    {
        a[i] = 0;
        tryAt(i+1);
        return;
    }

    if(i==n)
    {
        a[i] = 1;
        print();
        return;
    }

    for(int j=1;j>=0;j--)
    {
        if(j==0 && a[i-1]==0) continue;
        a[i]=j;
        tryAt(i+1);
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        tryAt(1);
    }
}
