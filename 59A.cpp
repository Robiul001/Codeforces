#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int len,low=0,up=0;
    cin>>str;
    len=str.size();
    for(int i=0;i<len;i++)
    {
        if(islower(str[i]))
            low++;
        else
            up++;
    }

    if(low>=up)
    {
        for(int i=0;i<len;i++)
        {
            char ch=tolower(str[i]);
            cout<<ch;
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            char ch=toupper(str[i]);
            cout<<ch;
        }
    }
    return 0;
}
