#include<bits/stdc++.h>
using namespace std;
int main()
{
    int chk=0,cnt=0,cnt1=0;;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='|' && chk==0)
            cnt++;
        if(str[i]=='|' && chk==1)
            cnt1++;
        if(str[i]=='=')
            chk++;
    }
    if(cnt==cnt1)
    {
        cout<<str;
    }
    else if(cnt-1==cnt1+1)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='=' && str[i-2]!='+')
            {
                str[i-1]='=';
                str[i]='|';
                break;
            }
            if(str[i]=='=' && str[i-2]=='+')
            {
                str[i-1]='=';
                str[i-2]='|';
                str[i-3]='+';
                str[i]='|';
                break;
            }
        }
        cout<<str;
    }
    else if(cnt+1==cnt1-1)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='=')
            {
                str[i+1]='=';
                str[i]='|';
                break;
            }
        }
        cout<<str;
    }
    else
    {
        cout<<"Impossible";
    }
    //cout<<cnt<<" "<<cnt1;
    return 0;
}
