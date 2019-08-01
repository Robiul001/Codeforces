#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        sum+=(m+i%5)/5;
    }
    cout<<sum<<endl;
    return 0;
}
