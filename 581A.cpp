#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp,ans;
    cin>>a>>b;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    ans=a;
    b=b-a;
    b=b/2;
    cout<<ans<<" "<<b;
    return 0;
}
