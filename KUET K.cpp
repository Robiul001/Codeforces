#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int tmp,sum,dhaka,cnt=0;
        cin>>sum>>dhaka;
        for(int i=0;i<7;i++)
        {
            cin>>tmp;
            cnt+=tmp;
        }
        cnt+=dhaka;
        dhaka+=(sum-cnt);
        cout<<"Case "<<i<<": "<<dhaka<<endl;
    }
    return 0;
}
