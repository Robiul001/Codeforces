#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        //cout<<"Robiul";
        long long int a=n/2;
        if(a>=k)
        {
           // cout<<"Robiul";
            cout<<((2*k)-1);
        }
        else
        {
           // cout<<"Robiu";
            k-=a;
            cout<<(2*k);
        }
    }
    else
    {
        if(((n+1)/2)>=k)
        {
            cout<<(2*k)-1;
        }
        else
        {
            k-=((n+1)/2);
            cout<<(2*k);
        }
    }
    return 0;
}
