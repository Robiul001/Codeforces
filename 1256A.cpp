#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,n,s,tmp;
    cin>>a>>b>>n>>s;
    tmp = (s/n);
    tmp = min(tmp,a);
    if(s-(tmp*n)<=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
