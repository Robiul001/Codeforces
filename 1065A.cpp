#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int s,a,b,c,cnt;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        s=s/c;
        cnt=s;
        s=s/a;
        s*=b;
        cnt+=s;
        cout<<cnt<<endl;
    }
    return 0;
}
