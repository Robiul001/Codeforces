#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum=0,a=1000000002;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+= x;
        if(x%2==1 && a>x)
            a=x;
    }
    if(sum%2==1)
        sum-=a;
    cout<<sum;
    return 0;
}
