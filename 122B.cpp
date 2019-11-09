#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int four=0,seven=0,sz;
    cin>>str;
    sz=str.size();
    for(int i=0;i<sz;i++)
    {
        if(str[i]=='4')
            four++;
        if(str[i]=='7')
            seven++;
    }
    if(four==0 && seven==0)
        cout<<-1<<endl;
    else if(four>=seven)
        cout<<4<<endl;
    else
        cout<<7<<endl;
    return 0;
}
