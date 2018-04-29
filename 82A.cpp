#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,ans;
    double a,b;
    cin>>n;
    i=0;
    j=5;
    while(i<n)
    {
        i=i+j;
        j*=2;
    }
    j=j/2;
    i=i-j;
    n=n-i;
    j=j/5;
    a=n;
    b=j;
    ans=ceil(a/b);

    if(ans==1)
    {
        cout<<"Sheldon";
    }
    else if(ans==2)
    {
        cout<<"Leonard";
    }
    else if(ans==3)
    {
        cout<<"Penny";
    }
    else if(ans==4)
    {
        cout<<"Rajesh";
    }
    else
    {
        cout<<"Howard";
    }
    //cout<<ans;
    return 0;
}
