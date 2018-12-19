#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,p=0,j=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(j<a)
            p++;
        else
            p=1;
        j=a;
        ans=max(ans,p);
    }
    cout<<ans<<endl;
    return 0;
}
