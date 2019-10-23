#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        vector<long long>vec;
        long long int n,tmp,cnt=0,ans=0,n1;
        cin>>n;
        tmp = n;
        while(tmp)
        {
            cnt++;
            tmp/=3;
        }
        for(int i=0;i<=cnt;i++)
        {
            vec.push_back(pow(3,i));
        }
        n1=vec.size();
        for(int i=0;i<n1;i++)
        {
            ans+=vec[i];
            if(ans>=n)
                break;
        }
        for(int i=n1-1;i>=0;i--)
        {
            if(ans-vec[i]>=n)
                ans = ans - vec[i];
        }
        vec.clear();
        cout<<ans<<endl;
    }
    return 0;
}
