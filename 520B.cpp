#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    if(n>=m)
    {
        cnt+=(n-m);
        cout<<cnt;
        return 0;
    }
    while(n<m)
    {
        if(m%2==0)
        {
            m/=2;
        }
        else
        {
            m++;
        }
        cnt++;
    }
    cout<<cnt+(n-m);
    return 0;
}
