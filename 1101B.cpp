#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,cnt=0;
    string str;
    cin>>str;
    int len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]=='[')
            break;
    }
    for(j=len-1;j>=0;j--)
    {
        if(str[j]==']')
            break;
    }
    for(k=i+1;k<len;k++)
    {
        if(str[k]==':')
            break;
    }
    for(l=j-1;l>=0;l--)
    {
        if(str[l]==':')
            break;
    }

    if(!(i<=(j-3)) || k<i || j<l || k==l)
        cout<<-1<<endl;
    else
    {
        for(i=k+1;i<l;i++)
        {
            if(str[i]=='|')
                cnt++;
        }
        cout<<cnt+4<<endl;
    }
    return 0;
}
