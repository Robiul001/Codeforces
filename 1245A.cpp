#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        c = __gcd(a,b);
        if(c==1)
            cout<<"Finite"<<endl;
        else
            cout<<"Infinite"<<endl;
    }
    return 0;
}
