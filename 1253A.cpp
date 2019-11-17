#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[100005];
        int brr[100005];
        int crr[100005];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        for(int i=0;i<n;i++)
        {
            crr[i] = brr[i]-arr[i];
        }
        int cnt=0;
        bool robi = true;
        for(int i=0;i<n;i++)
        {
            if(crr[i]<0)
            {
                cout<<"NO"<<endl;
                robi = false;
            }
            if(crr[i]!=0)
            {
                cnt=crr[i];
                break;
            }
        }
        if(robi){
        if(cnt==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int i;
            for(i=0;i<n-1;i++)
            {
                if(crr[i]==cnt && crr[i+1]!=cnt)
                {
                  break;
                }
            }
            //cout<<i<<endl;
            bool chk =true;
            for(int j=i+1;j<n;j++)
            {
                if(crr[j]!=0)
                {
                    cout<<"NO"<<endl;
                    chk=false;
                    break;
                }
            }
            if(chk)
                cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}
