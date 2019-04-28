#include<bits/stdc++.h>
using namespace std;
int arr[102];
int main()
{
      int n,a,b,cnt=0;
      cin>>n;
      for(int i=1;i<n;i++)
      {
            cin>>arr[i];
      }
      cin>>a>>b;
      for(int i=a;i<b;i++)
            cnt+=arr[i];
      cout<<cnt<<endl;
      return 0;
}
