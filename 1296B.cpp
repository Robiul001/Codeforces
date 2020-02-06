#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp,cnt=0;
        cin>>n;
        while(n>=10)
        {
            tmp = n%10;
            cnt+=(n-tmp);
            n = n/10;
            n += tmp;
            //cout<<tmp<<" "<<cnt<<" "<<n<<endl;
        }
        cnt+=n;
        cout<<cnt<<endl;
    }
    return 0;
}
