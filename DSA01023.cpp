#include<bits/stdc++.h>
using namespace std;

int a[16],n,k;

//n=6 , k=4 
//1 3 5 6
//a[0] la '0'
//i=1 ,j=1 <= a[1] false nen vong lap ket thuc
//i=2 ,j=2 rank=1 + c(4,2)=7
//i=3 ,j=4 rank=7 + c(2,1)=9
//i=4 ,j=6 <= a[4] false nen vong lap ket thuc
//rank = 9

int combination(int n, int k)
{
    if(k == 0 || k == n) return 1;
    return combination(n - 1,k - 1) + combination(n - 1, k);
}

int cRank()
{
    int rank=1;
    for(int i=1;i<=k;i++)
    {
        for(int j = a[i - 1] + 1; j < a[i] ;j++)
        {
            rank += combination(n - j,k - i);
        }
    }
    return rank;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];
        cout<<cRank()<<"\n";
    }
}
