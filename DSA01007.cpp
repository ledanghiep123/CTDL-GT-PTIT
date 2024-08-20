#include<bits/stdc++.h>
using namespace std;

int s[11],n;

void print()
{
    for(int i=1;i<=n;i++) cout<<char(s[i]+'A');
    cout<<" ";
}

void tryAt(int i)
{
    for(int j=0;j<=1;j++)
    {
        s[i]=j;
        if(i == n) print();
        else tryAt(i+1);
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        tryAt(1);
        cout<<"\n";
    }
}
