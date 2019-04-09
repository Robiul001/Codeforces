#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,arr[300005];
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      int start=0,en=n-1,mx=0;
      for(int i=0;i<n;i++)
      {
            if(arr[i] != arr[start])
            {
                  mx=max(mx,i);
            }
            if(arr[i]!=arr[en])
            {
                  mx=max(mx,en-i);
            }
      }
      cout<<mx;
      return 0;
}
