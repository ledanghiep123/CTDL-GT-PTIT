#include<bits/stdc++.h>
using namespace std;

string a[16],x[31];
int n,k;

void print()
{
    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    cout<<"\n";
}

void tryAt(int i,int prev)
{
    for(int j=prev+1;j<=n-k+i;j++)
    {
        a[i]=x[j];
        if(i==k) print();
        else tryAt(i+1,j);
    }
}

int main()
{
    cin>>n>>k;
    set<string> st;
    string temp;
    while(n--)
    {
        cin>>temp;
        st.insert(temp);
    }

    int c = 0;
    for(string s : st)
    {
        c++;
        x[c] = s;
    }
    n=c;
    tryAt(1,0);

}
