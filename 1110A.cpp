#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,k,a,ans=0;
    cin>>b>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a;
        ans=((ans*b)+a)%2;
    }
    if(ans)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    return 0;
}
