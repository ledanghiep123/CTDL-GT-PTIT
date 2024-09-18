#include<bits/stdc++.h>
using namespace std;

int a[17],n;

void print()
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0) cout<<6;
        else cout<<8;
    }
    cout<<"\n";
}

void tryAt(int i)
{
    if(i==1)
    {
        a[i]=1;
        tryAt(i+1);
        return;
    }
    if(i==n)
    {
        if(a[i-1]==0 && a[i-2]==0 && a[i-3]==0){
            return;
        }
        a[i]==0;
        print();
        return;
    }
    for(int j=0;j<=1;j++)
    {
        if(j==0 && a[i-1]==0 && a[i-2]==0 && a[i-3]==0) continue;
        if(j==1 && a[i-1]==1) continue;
        a[i]=j;
        tryAt(i+1);
    }
}

int main()
{
    cin>>n;
    if(n < 6)
    {
        return 0;
    }
    tryAt(1);
}
