#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,s,t;
        cin>>n>>s>>t;
        cout<<(n-min(s,t))+1<<endl;
    }
    return 0;
}
