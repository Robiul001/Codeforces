#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int q,n,a,b,ans;
      cin>>q;
      while(q--)
      {
            cin>>n>>a>>b;
            ans=(n/2*min((2*a),b)) + ((n%2)*a);
            cout<<ans<<endl;
      }
      return 0;
}
