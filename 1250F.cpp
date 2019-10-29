#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,mn;
    cin>>n;
    mn = INT_MAX;
    n1 = sqrt(n) + 2;
    for(int i=1;i<=n1;i++)
    {
        int tmp,tmp2;
        if(n%i==0)
        {
            tmp = n/i;
            tmp2 = 2*(tmp+i);
            mn = min(mn,tmp2);
        }
    }
    cout<<mn<<endl;
    return 0;
}
