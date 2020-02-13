/**==============================================*\
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;

int n,arr[100005],suf[100005];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        suf[i+1] = suf[i] | arr[i];
    int ans=INT_MIN,pos=-1,x=0;
    for(int i=n-1;i>=0;i--)
    {
        int y = x | suf[i];
        int res = (arr[i] | y) - y;
        if(res>ans)
        {
            ans = res;
            pos = i;
        }
        x = x | arr[i];
    }
    swap(arr[0],arr[pos]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

