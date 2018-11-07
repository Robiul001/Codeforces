#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cnt=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
            cnt+=pow(2,i);
    }
    cout<<cnt;
    return 0;
}
