#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    long long int f,t,maxi=0,m;
    cin>>n>>k;
    cin>>f>>t;
    if(t>k)
        maxi=f-(t-k);
    else
        maxi=f;
    n--;
    while(n--)
    {
        cin>>f>>t;
        if(t>k)
            m=f-(t-k);
        else
            m=f;
        maxi=max(m,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
