#include<bits/stdc++.h>
using namespace std;
int main()
{
      int arr[2005],n,cnt,ans=0;
      cin>>n;
      for(int i=1;i<=n;i++)
            cin>>arr[i];

      for(int i=1;i<=n;i++)
      {
            int temp=arr[i];
            cnt=0;
            while(temp!=-1)
            {
                  temp=arr[temp];
                  cnt++;
            }
            ans=max(ans,cnt);
      }
      cout<<ans+1<<endl;
      return 0;
}
