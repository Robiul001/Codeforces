/**==============================================*\
Bismillahir Rahmanir Rahim
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,index=0,dis=0,mn,mx;
        int arr[100005];
        vector<int>vec;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==-1 && arr[i+1]==-1)
                continue;
            if(arr[i]!=-1 && arr[i+1]!=-1)
            {
                dis = max(dis,abs(arr[i]-arr[i+1]));
                continue;
            }
            if(arr[i]!=-1)
                vec.push_back(arr[i]);
            else
                vec.push_back(arr[i+1]);
        }
        sort(vec.begin(),vec.end());
        if(vec.size()==0)
            cout<<dis<<" "<<0<<endl;
        else
        {
            mn = vec[0];
            mx = vec[vec.size()-1];
            int k = (mn+mx)/2;
            dis = max(dis,max(abs(k-mn),abs(k-mx)));
            cout<<dis<<" "<<k<<endl;
        }
    }
    return 0;
}
