#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a=n-i;
        if(a<i)
        {
            break;
        }
        if(a%i==0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
