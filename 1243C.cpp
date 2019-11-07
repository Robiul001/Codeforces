#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,ans=0;
    cin>>n;
    for(long long i=2;i*i<=n+1;i++)
    {
        if(n%i==0)
        {
            ans=__gcd(ans,i);
            ans=__gcd(ans,n/i);
        }
    }
    if(ans==0)
        cout<<n<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
