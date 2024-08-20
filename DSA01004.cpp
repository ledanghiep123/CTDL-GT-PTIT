#include<bits/stdc++.h>
using namespace std;

int x[16],n,k;

bool next()
{
    int i=k; 
    while(x[i] == n-k+i) i--;

    if(i != 0)
    {
        x[i]++;
        for(int j=i+1;j<=k;j++)
        {
            x[j]=x[j-1]+1;
        }
        return 1;
    }
    return 0;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;

        for(int i=1;i<=k;i++) x[i]=i;

        do
        {
            for(int i=1;i<=k;i++) cout<<x[i];
            cout<<" ";
        }
        while(next());
        
        cout<<"\n";
    }
}
