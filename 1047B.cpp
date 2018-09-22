#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,cnt;
    cin>>n;
    cin>>x>>y;
    cnt=x+y;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        if((x+y)>cnt)
        {
            cnt=x+y;
        }
    }
    cout<<cnt;
    return 0;
}
