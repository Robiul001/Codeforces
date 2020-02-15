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
        long long int x,y,a,b,tmp,mn;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
        {
            tmp = (y-x)/(a+b);
            cout<<tmp<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

