#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,ans;
    cin>>n>>m>>z;
    ans=z/lcm(n,m);
    cout<<ans<<endl;
    return 0;
}
