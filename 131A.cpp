#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int len,cntl=0,cntu=0;
    cin>>str;
    len=str.size();
    for(int i=0;i<len;i++)
    {
        if(islower(str[i]))
        {
            cntl++;
        }
        if(isupper(str[i]))
        {
            cntu++;
        }
    }
    if(len==1)
    {
        if(isupper(str[0]))
        {
            char ch=tolower(str[0]);
            cout<<ch;
        }
        else
        {
            char ch2=toupper(str[0]);
            cout<<ch2;
        }

    }
    else if(cntl==len || cntu==len)
    {
//        char ch=toupper(str[0]);
//        cout<<ch;
        for(int i=0;i<len;i++)
        {
            char ch1=tolower(str[i]);
            cout<<ch1;
            //printf("%c",tolower(str[i]));
            //cout<<tolower(str[i]);
        }
    }
    else if(islower(str[0]) && cntu==len-1)
    {
        char ch=toupper(str[0]);
        cout<<ch;
        for(int i=1;i<len;i++)
        {
            char ch1=tolower(str[i]);
            cout<<ch1;
            //printf("%c",tolower(str[i]));
            //cout<<tolower(str[i]);
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            cout<<str[i];
        }
    }
    return 0;
}
