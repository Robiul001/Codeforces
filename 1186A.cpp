#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    m = min(m,k);
    if(m>=n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
