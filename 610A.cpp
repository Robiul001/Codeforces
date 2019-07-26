#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,ans;
    cin>>n;
    if(n%2!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    n/=2;
    temp=n/2;
    if(n==(2*temp))
        ans=temp-1;
    else
       ans=temp;

    if(ans<=0)
        cout<<0<<endl;
    else
        cout<<ans<<endl;
    return 0;
}



