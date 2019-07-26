#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int xx[205],yy[205];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>xx[i]>>yy[i];
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++)
        {
            if(xx[i]<xx[j] && yy[i]==yy[j])
                a++;
            if(xx[i]>xx[j] && yy[i]==yy[j])
                b++;
            if(xx[i]==xx[j] && yy[i]>yy[j])
                c++;
            if(xx[i]==xx[j] && yy[i]<yy[j])
                d++;
        }
        if(a>0 && b>0 && c>0 && d>0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
