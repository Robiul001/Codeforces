#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,b,d,a,ans=0,sum=0;
      cin>>n>>b>>d;
      while(n--)
      {
            cin>>a;
            if(a<=b)
                  sum+=a;
            if(sum>d)
            {
                  ans++;
                  sum=0;
            }
      }
      cout<<ans<<endl;
      return 0;
}
