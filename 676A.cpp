#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,arr[102],arr2[102];
      cin>>n;
      for(int i=0;i<n;i++)
            cin>>arr[i];
      int mini,maxi,minindex,maxindex;
      for(int i=0;i<n;i++)
            arr2[i]=arr[i];
      sort(arr2,arr2+n);
      mini=arr2[0];
      maxi=arr2[n-1];
      for(int i=0;i<n;i++)
      {
            if(mini==arr[i])
                  minindex=i+1;
            if(maxi==arr[i])
                  maxindex=i+1;
      }
      int ans = max(max(abs(1-minindex),abs(1-maxindex)),max(abs(n-minindex),abs(n-maxindex)));
      ans = max(ans,abs(minindex-maxindex));
      cout<<ans<<endl;
      //cout<<minindex<<" "<<maxindex<<endl;
      return 0;
}
