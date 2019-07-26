#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,temp,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k;
        ans=0;
        while(n>0)
        {
            if(n%k==0)
            {
                ans++;
                n/=k;
            }
            else
            {
                temp=n%k;
                ans+=temp;
                n-=temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
