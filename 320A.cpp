#include<bits/stdc++.h>
using namespace std;

bool ismagic(string st)
{
    if(st[0]=='4')
        return false;
    if(st.find("444")!=st.npos)
        return false;
    for(int i=0;i<st.size();i++)
        if(st[i]!='1' && st[i]!='4')
            return false;
    return true;
}

int main()
{
    string str;
    cin>>str;
    if(ismagic(str))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
