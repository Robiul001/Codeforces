#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,ans=0,arr[102];
      cin>>n;
      for(int i=0;i<n;i++)
            cin>>arr[i];

      for(int i=1;i<n;i++)
      {
            if(arr[i]==3 && arr[i]!=arr[i-1])
                  arr[i]-=arr[i-1];
            if(arr[i]!=3 && arr[i]==arr[i-1])
                  arr[i]=0;
      }

      for(int i=0;i<n;i++)
            if(arr[i]==0)
                  ans++;
      cout<<ans<<endl;
      return 0;
}
