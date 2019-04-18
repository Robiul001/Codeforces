#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,a,cntmn=0,cntmx=0,arr[100005],mx=0,mn=1000000007;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
            mn=min(mn,arr[i]);
            mx=max(mx,arr[i]);
      }
      for(int i=0;i<n;i++)
      {
            if(arr[i]==mn)
                  cntmn++;
            if(arr[i]==mx)
                  cntmx++;
      }
      if(mn==mx)
            cout<<0<<endl;
      else
            cout<<n-cntmn-cntmx<<endl;
      return 0;
}
