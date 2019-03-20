#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,x,temp,sum=0,ans;
      cin>>n>>x;
      while(n--)
      {
            cin>>temp;
            sum+=temp;
      }
      sum=abs(sum);
      ans=ceil((double)sum/(double)x);
      cout<<ans<<endl;
      return 0;
}
