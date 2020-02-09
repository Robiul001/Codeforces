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
        int n,pos=0,zero=0,neg=0,tmp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            if(tmp==0)
                zero++;
            else if(tmp<0)
                neg+=(abs(tmp));
            else
                pos+=tmp;
        }
        int cnt;
        cnt=zero;
        pos+=zero;
        if(pos==neg)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}

