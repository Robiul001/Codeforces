#include<bits/stdc++.h>
using namespace std;

int arr[51],arr2[52];

int main()
{
      int n,h,v;
      cin>>n;
      for(int i=1;i<=n*n;i++)
      {
            cin>>h>>v;
            if(!arr[h] && !arr2[v])
            {
                  cout<<i<<" ";
                  arr[h]=1;
                  arr2[v]=1;
            }
      }
      return 0;
}
