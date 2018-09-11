#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,p,sum=0,price=101;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>p;
        if(price>p)
        {
            price=p;
        }
        sum+=a*price;
    }
    cout<<sum;
    return 0;
}
