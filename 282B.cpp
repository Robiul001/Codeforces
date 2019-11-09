#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,g;
        cin>>a>>g;
        if(cnt+a<=500)
        {
            cnt+=a;
            cout<<"A";
        }
        else
        {
            cnt-=g;
            cout<<"G";
        }
    }
    cout<<endl;
    return 0;
}
