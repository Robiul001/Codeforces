#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt=0,n=str.size();
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
                cnt++;
        }
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
                cnt++;
        }
    }
    if(cnt==1)
        cout<<"YES"<<endl;
    else if(cnt==0 && n%2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
