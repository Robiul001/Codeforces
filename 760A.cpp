#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,d;
    cin>>m>>d;
    if(m==2)
    {
        if(d==1)
            cout<<4<<endl;
        else
            cout<<5<<endl;
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==7)
            cout<<6<<endl;
        else
            cout<<5<<endl;
    }
    else
    {
        if(d==6 || d==7)
            cout<<6<<endl;
        else
            cout<<5<<endl;
    }
    return 0;
}
