#include<bits/stdc++.h>
using namespace std;

long long int arr[105];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int k,n,a,b,ans,tmp;
        cin>>k>>n>>a>>b;
        tmp = k - (n*b);
        ans = (tmp-1)/(a-b);

        if(ans<0 || tmp<=0)
            cout<<-1<<endl;
        else if(ans>=n)
            cout<<n<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}


