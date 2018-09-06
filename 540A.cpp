#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m1,m2,m3,m4,cnt=0,n1,n2;
    char arr[1002],arr2[1002];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++)
    {
        n1=arr[i]-48;
        n2=arr2[i]-48;
        ///calculation
        m1=abs(n1-n2);
        if(n1>n2)
        {
            //cout<<"Robi"<<endl;
            m2=(9-n1);
            m3=n2+1;
        }
        else if(n1<n2)
        {
            //cout<<"ul"<<endl;
            m2=(9-n2);
            m3=n1+1;
        }
        m4=m2+m3;
        if(n1==n2)
        {
            cnt+=0;
        }
        else
        {
            //cout<<((m1<m4)?m1:m4)<<endl;
            cnt+=(m1<m4)?m1:m4;
        }
    }
    cout<<cnt;
    return 0;
}
