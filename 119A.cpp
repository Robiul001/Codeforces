#include<bits/stdc++.h>
using namespace std;
/// GCD Function

int gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}

int main()
{
    int a,b,n,n1,a1,b1,cnt=1;
    cin>>a>>b>>n;
    while(n>0)
    {
        if(cnt%2!=0)
        {
            cnt++;
            n-=gcd(a,n);
        }
        else
        {
            cnt++;
            n-=gcd(b,n);
        }
    }
    if(cnt%2==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }
    //cout<<cnt;




//cout<<gcd(3,9);
    return 0;
}
