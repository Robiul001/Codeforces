#include<bits/stdc++.h>
using namespace std;
int main()
{
      int arr[35],arr2[35];
      int n,m,r;
      cin>>n>>m>>r;
      for(int i=0;i<n;i++)
            cin>>arr[i];
      for(int i=0;i<m;i++)
            cin>>arr2[i];
      sort(arr,arr+n);
      sort(arr2,arr2+m);
      int mini=arr[0];
      int mx = arr2[m-1];
      int cnt = r/mini;
      int ans = mx*cnt;
      ans+=(r%mini);
      if(ans>r)
            cout<<ans<<endl;
      else
            cout<<r<<endl;
}
