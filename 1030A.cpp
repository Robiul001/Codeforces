#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        ans=max(ans,m);
    }
    if(ans)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
