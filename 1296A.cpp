#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0,tmp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            if(tmp%2==0)
                even++;
            else
                odd++;
        }
        if((odd%2==0 && even==0) || even==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
