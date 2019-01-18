#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,maxi,mini,cnt=0;
    cin>>n>>a;
    maxi=a;
    mini=a;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(maxi<a)
        {
            maxi=a;
            cnt++;
        }
        else if(mini>a)
        {
            mini=a;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
