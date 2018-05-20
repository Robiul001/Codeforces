#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        if(n%10==0)
        {
            //cout<<"robi"<<"\t";
            n/=10;
        }
        else
        {
            //cout<<"ul"<<"\t";
            n--;
        }
    }
    cout<<n;
    return 0;
}