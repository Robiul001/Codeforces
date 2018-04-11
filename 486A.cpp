#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,n1,n2,ans;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        ans=(n*(n+1))-((n)*(n));
    }
    else
    {
        n1=(n-1)/2;
        n2=(n+1)/2;
        ans=(n1*(n1+1))-((n2)*(n2));
        //ans=(n*n*(n-1))-(n*n);
    }
    cout<<ans;
    return 0;
}
