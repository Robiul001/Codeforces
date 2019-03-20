#include<bits/stdc++.h>
using namespace std;
int l[105],r[105];
int main()
{
      int n,k,cnt=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>l[i]>>r[i];
      }
      cin>>k;
      for(int i=0;i<n;i++)
      {
            if(k<=r[i])
                  cnt++;
      }
      cout<<cnt<<endl;
      return 0;
}
