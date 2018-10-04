#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,cnt1=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='8')
            cnt++;
    }
    if(cnt==0 || n<11)
    {
        cout<<0;
    }
    else
    {
        //cout<<cnt;
        while(cnt!=0)
        {
            n-=11;
            cnt--;
            cnt1++;
            //cout<<n<<endl;
            if(n<11)
                break;
        }
        cout<<cnt1;
    }
    return 0;
}
