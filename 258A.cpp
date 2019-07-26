#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,cnt=0;
    cin>>str;
    n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            cnt=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
        if(i!=cnt)
            cout<<str[i];
    return 0;
}
