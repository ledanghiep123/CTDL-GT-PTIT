#include<bits/stdc++.h>
using namespace std;

int a[10],n;

int factorial(int x)
{
    int res=1;
    for(int i=2;i<=x;i++) res*=i;
    return res;
}
int fRank()
{
    int fact=factorial(n);//giai thua
    int rank=1;// rank ban dau la 1
    for(int i=1;i<=n;i++)
    {
        fact /= (n-i+1);//chia dan trong moi lan lap bang so luong ptu con lai
        int countSmaller=0;//so ptu nho hon
        //dem so ptu nho hon a[i] ma chua xh trc do
        for(int j=1;j<a[i];j++)
        {
            bool isPresent = false;// check xem ptu da xh trc do chua
            for(int k=1;k<i;k++)
            {
                if(a[k]==j)//ktra xem j da xh trong mang a chua
                {
                    isPresent=true;
                    break;
                }
            }
            if(!isPresent) countSmaller++;//chua xuat hien thi tang 1
        }
        rank += countSmaller * fact;
    }
    return rank;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        cout<<fRank()<<"\n";
    }
}
