#include<bits/stdc++.h>
using namespace std;

int a[11],n;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++) a[i]=i+1;

        do
        {
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<" ";
        } while (next_permutation(a,a+n));

        cout<<"\n";
    }
}
