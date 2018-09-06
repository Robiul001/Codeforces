#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,cnt1=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    cout<<abs(cnt-cnt1);
    return 0;
}
