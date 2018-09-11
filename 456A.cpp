#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,cnt1=0;
    cin>>n;
    pair<int,int>p1[n];
    //int arrp[100001],arrq[100001];
    for(int i=0;i<n;i++)
    {
        cin>>p1[i].first>>p1[i].second;
    }
    sort(p1,p1+n);
    for(int i=0;i<n-1;i++)
    {
        if((p1[i].first<p1[i+1].first) && (p1[i].second>p1[i+1].second))
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}
