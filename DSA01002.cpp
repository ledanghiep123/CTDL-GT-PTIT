#include<bits/stdc++.h>
using namespace std;

int a[1001],n,k;
// 1 4 5 
// n=5,k=3
void next()
{
    int i=k; //i=3
    while(a[i] == n-k+i) i--;//lan 1: a[3]=5-3+3 i=2
//lan 2: a[2]=5-3+2 i=1
//lan 3: a[1]=5-3+1 sai nen i=1
    if(i != 0) 
    {
        a[i]++;//a[1]=2
        for(int j=i+1;j<=k;j++)
        {
            a[j]=a[j-1]+1;//a[2]=a[1]+1=3 a[3]=a[2]+1=4
        }//2 3 4
    }
    else
    {
        for(int j=1;j<=k;j++)
            a[j] = j;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];

        next();

        for(int i=1;i<=k;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}
