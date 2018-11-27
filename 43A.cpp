#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0;
    string str,str1,str2;
    cin>>n>>str;
    str1=str;
    cnt1++;
    if(n==1)
        cout<<str;
    else
    {
        for(int i=1;i<n;i++)
        {
            cin>>str;
            if(str==str1)
            {
                cnt1++;
            }
            else
            {
                str2=str;
                cnt2++;
            }
        }
        if(cnt1>cnt2)
            cout<<str1;
        else if(cnt1<cnt2)
            cout<<str2;
        else{}
    }
    return 0;
}
