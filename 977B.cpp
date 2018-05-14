#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0,cnt1=-1;
    cin>>n;
    char ch,ch1,str[105];
    for(int i=0;i<n;i++)
    {
        cin>>str;
    }
    for(int i=0;i<n-1;i++)
    {
        cnt=0;
        for(int j=0;j<n-1;j++)
        {
            if(str[i]==str[j] && str[i+1]==str[j+1])
            {
                cnt++;
            }
        }
        if(cnt>cnt1)
        {
            cnt1=cnt;
            ch=str[i];
            ch1=str[i+1];
        }
    }
    cout<<ch<<ch1;
    return 0;
}
