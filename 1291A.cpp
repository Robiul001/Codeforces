/**==============================================*\
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
        int n,odd=0,cnt=0;
        string str;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if((str[i]-'0')%2!=0)
                odd++;
        }
        if(odd<=1)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if((str[i]-'0')%2!=0)
                {
                    cout<<str[i];
                    cnt++;
                }
                if(cnt==2)
                    break;
            }
            cout<<endl;
        }
    }
    return 0;
}
