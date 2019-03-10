#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    double a,b,mini=INT_MAX;
    cin>>n>>m;
    while(n--)
    {
        cin>>a>>b;
        mini=min(mini,(a/b));
    }
    cout<<fixed<<setprecision(8)<<mini*(double)m<<endl;
    return 0;
}
