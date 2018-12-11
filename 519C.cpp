#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    while(n>0 && m>0 && m+n>2)
    {
        if(n<m)
        {
            n-=1;
            m-=2;
        }
        else
        {
            m-=1;
            n-=2;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
