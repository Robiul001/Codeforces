#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,one=0;
    string str;
    cin>>n;
    cin>>str;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
            one++;
        else
            zero++;
    }

    if(zero!=one)
    {
        cout<<1<<endl<<str<<endl;
    }
    else
    {
        cout<<2<<endl<<str[0]<<" ";
        for(int i=1;i<n;i++)
            cout<<str[i];
        cout<<endl;
    }

    return 0;
}
