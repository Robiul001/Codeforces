#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    for(int i=1;i<=35;i++)
    {
        ans=(i*(i+1))/2;
        if(ans==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ans>n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    return 0;
}
