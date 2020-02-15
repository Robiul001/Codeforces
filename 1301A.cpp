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
        string a,b,c;
        int n;
        cin>>a>>b>>c;
        n = a.size();
        bool chk = true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i] && b[i]!=c[i])
            {
                chk=false;
                break;
            }
        }
        if(chk)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
