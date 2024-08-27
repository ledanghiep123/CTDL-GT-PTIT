#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    vector<string> M(n); 

    for(int i=0;i<n;i++)
    {
        cin>>M[i];
    }

    sort(M.begin(),M.end());
    M.erase(unique(M.begin(),M.end()), M.end());//xoá các phần tử trùng lặp
    n = M.size();// cập nhật lại n

    string s(k,'0');//chuỗi với k ký tự '0'
    s += string(n-k,'1');//thêm (n-k) ký tự '1' vào chuỗi

    do{
        for(int i=0;i<n;i++){
            if(s[i]=='0') cout<<M[i]<<" ";
        }
        cout<<"\n";
    }
    while(next_permutation(s.begin(),s.end()));//tạo tổ hợp tiếp theo
}
