#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,t1,a=1,b=1,ans=0,check=0;
    cin>>n;
    cin>>t;
    for(int i=1;i<n;i++)
    {
        cin>>t1;
        if(t==t1 && check==0)
        {
            a++;
        }
        else if(t==t1 && check==1)
        {
            b++;
        }
        else
        {
            if(check==0)
            {
                b=1;
                check=1;
            }
            else
            {
                ans=max(ans,(2*min(a,b)));
                //cout<<a<<" "<<b<<endl;
                a=b;
                b=1;
            }
        }
        t=t1;
    }
    ans=max(ans,(2*min(a,b)));
    cout<<ans<<endl;
    return 0;
}
