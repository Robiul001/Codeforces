#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int a,b,c,mn,mx,ans;
        cin>>a>>b>>c;
//        cout<<a<<" "<<b<<" "<<c<<endl;
        mn = min(a,min(b,c));
        mx = max(a,max(b,c));
        if(mn==mx || mx-mn==1)
            ans=0;
        else if(mn == a && mn ==b)
        {
            a++;
            b++;
            if(mx == c)
                c--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
        else if(mn == a && mn ==c)
        {
            a++;
            c++;
            if(mx == b)
                b--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
        else if(mn == c && mn ==b)
        {
            c++;
            b++;
            if(mx == a)
                a--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
        else if(mn == a)
        {
            a++;
            if(mx == c)
                c--;
            if(mx==b)
                b--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
        else if(mn == b)
        {
            b++;
            if(mx == c)
                c--;
            if(mx==a)
                a--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
        else
        {
            c++;
            if(mx == a)
                a--;
            if(mx==b)
                b--;
            ans = abs(c-a) + abs(c-b) + abs(b-a);
        }
//        cout<<a<<" "<<b<<" "<<c<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
