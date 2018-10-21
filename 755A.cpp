#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    int n,m,k;
    cin>>n;
    if(n==1)
        cout<<3;
    else if(n%2==1)
        cout<<1;
    else
    {
        k=1;
        while(1)
        {
            if(isprime((n*k)+1)==0)
            {
                cout<<k;
                return 0;
            }
            k++;
        }
    }
    return 0;
}
