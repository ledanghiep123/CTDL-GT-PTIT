#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> a)
{
    for(int i=1;i<a.size();i++)
        if(abs(a[i] - a[i-1]) == 1) return 0;
    return 1;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        iota(a.begin(),a.end(),1);

        do {
            if(check(a))
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i];
                }
                cout<<"\n";
            }
        }
        while(next_permutation(a.begin(),a.end()));
    }
}
