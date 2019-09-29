#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int n,sum=0;
        cin>>n;
        while(n--)
        {
            long long int tmp;
            cin>>tmp;
            if(tmp<=2048)
                sum+=tmp;
        }
        if(sum>=2048)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
