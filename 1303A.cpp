/**==============================================*\
Bismillahir Rahmanir Rahim
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int first=-1,last=-1;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                first=i;
                i = str.size()+2;
            }
        }
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='1')
            {
                last=i;
                i = -1;
            }
        }
        int cnt=0;
        for(int i=first;i<=last;i++)
        {
            if(str[i]=='0')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

