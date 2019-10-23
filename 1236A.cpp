#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,tmp,ans=0;
        cin>>a>>b>>c;
        tmp = c/2;
        if(tmp<=b)
        {
            ans += (tmp*3);
            b-=tmp;
        }
        else
        {
            ans+= (b*3);
            b=0;
        }
        tmp = b/2;
        if(a>=tmp)
        {
            ans += (tmp*3);
            a-=tmp;
        }
        else
        {
            ans+= (a*3);
        }
        cout<<ans<<endl;
    }
    return 0;
}
