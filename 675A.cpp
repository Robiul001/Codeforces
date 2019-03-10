#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
                cout<<"Yes"<<endl;
        else
                cout<<"No"<<endl;
    }
    else
    {
        if((b-a)%c==0 && (b-a)/c>=0)
                cout<<"Yes"<<endl;
        else
                cout<<"No"<<endl;
    }
    return 0;
}
