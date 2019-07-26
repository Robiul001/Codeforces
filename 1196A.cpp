#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,c,ans;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        ans = a+b+c;
        cout<<ans/2<<endl;
    }
    return 0;
}
