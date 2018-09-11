#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n,m,arrb[101],arrg[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arrb[i];
    }
    sort(arrb,arrb+n);
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arrg[i];
    }
    sort(arrg,arrg+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //cout<<abs(arrb[i]-arrg[j])<<"  ";
            if(abs(arrb[i]-arrg[j])<=1 && arrg[j]!=0)
            {
                cnt++;
                arrg[j]=0;
                j=m;
            }
        }
    }
    cout<<cnt;
    return 0;
}
