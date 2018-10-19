#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,mex=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>mex)
        {
            cout<<i+1;
            return 0;
        }
        mex=max(mex,a+1);
    }
    cout<<-1;
    return 0;
}
