#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,k,ans,ans1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=(n*(n+1))/2;
        k=log2(n);
        ans1=pow(2,k+1)-1;
        cout<<ans-(2*ans1)<<endl;
    }
    return 0;
}

