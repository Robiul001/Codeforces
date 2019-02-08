#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans1,ans2,t,l1,r1,l2,r2;
    cin>>t;
    while(t--)
    {
        cin>>l1>>r1>>l2>>r2;
        ans1=l1;
        ans2=r2;
        if(ans1>=l1 && ans1<=r1 && ans1!=ans2 && ans2>=l2 && ans2<=r2)
            cout<<ans1<<" "<<ans2<<endl;
        else
        {
            ans1=(l1+r1)/2;
            ans2=(l2+r2)/2;
            cout<<ans1<<" "<<ans2<<endl;
        }
    }
    return 0;
}
