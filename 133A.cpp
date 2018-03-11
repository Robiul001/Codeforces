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
        if(str[i]=='H')
        {
            cnt++;
        }
        if(str[i]=='Q')
        {
            cnt++;
        }
        if(str[i]=='9')
        {
            cnt++;
        }
//        if(str[i]=='+')
//        {
//            cnt++;
//        }
    }
    if(cnt>0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
