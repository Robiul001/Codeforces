#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp1=-1,tmp2=-1,ans;
        string str;
        cin>>n;
        cin>>str;
        if(str[0]=='1' || str[n-1]=='1')
            cout<<(2*n)<<endl;
        else
        {
            for(int i=0;i<n;i++)
                if(str[i]=='1')
                    tmp1=i;
            for(int i=n-1;i>=0;i--)
                if(str[i]=='1')
                    tmp2=i;
            //cout<<tmp1<<" "<<tmp2<<endl;
            if(tmp1==-1 && tmp2==-1)
                ans=n;
            else
                ans = max(((tmp1+1)*2),((n-tmp2)*2));
            cout<<ans<<endl;
        }
    }
    return 0;
}
