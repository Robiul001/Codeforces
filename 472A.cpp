#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,ans1,ans2;
    cin>>n;
    if(n%2==0)
    {
        ans1=4;
        ans2=n-ans1;
    }
    else
    {
        ans1=9;
        ans2=n-ans1;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}
