#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    if(n>=100)
    {
        sum+=n/100;
        n=n%100;
    }
    if(n>=20)
    {
        sum+=n/20;
        n=n%20;
    }
    if(n>=10)
    {
        sum+=n/10;
        n=n%10;
    }
    if(n>=5)
    {
        sum+=n/5;
        n=n%5;
    }
    if(n<5)
    {
        sum+=n;
    }
    cout<<sum<<endl;
    return 0;
}
