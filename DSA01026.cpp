#include<bits/stdc++.h>
using namespace std;

int a[101],n,k;
bool found = false;

void print(const vector<int>& cur)
{
    cout<<"[";
    for(int i=0;i<cur.size();i++)
    {
        cout<<cur[i];
        if(i != cur.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<"] ";
}

void tryAt(int i,vector<int>& cur,int cursum)
{
    if(cursum == k)
    {
        print(cur);
        found = true;
        return ;
    }
    for(int j=i;j<=n;j++)
    {
        if(cursum + a[j] <= k)
        {
            cur.push_back(a[j]);
            tryAt(j+1,cur,cursum+a[j]);
            cur.pop_back();
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        sort(a+1,a+n+1);
        vector<int> cur;
        found = false;
        tryAt(1,cur,0);

        if(!found)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<"\n";
        }
    }
}
