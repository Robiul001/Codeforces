#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,k,a,s=0,t=-1,c;
      cin>>n>>k;
      for(int i=1;i<=n;i++)
      {
            cin>>a;
            s+=a;
            c=min(8,s);
            k-=c;
            s-=c;
            k<=0 && t<0 ? t=i:0;
      }
      cout<<t<<endl;
      return 0;
}
