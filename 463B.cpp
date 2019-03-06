#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y,energy=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>y;
        energy+= x-y;
        if(energy<0)
        {
            ans+= -energy;
            energy=0;
        }
        x=y;
    }
    cout<<ans<<endl;
    return 0;
}
