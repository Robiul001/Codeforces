#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n,arr[5];
    string str;
    for(int i=0;i<4;i++)
        cin>>arr[i];
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        int a=(int)(str[i])-48;
        cnt+=arr[a-1];
    }
    cout<<cnt;
    return 0;
}
