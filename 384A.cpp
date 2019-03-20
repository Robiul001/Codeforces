#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,ans;
      char ch='C';
      cin>>n;
      if(n%2)
            ans=(n*(n/2))+(ceil((double)n/2.0));
      else
            ans=n*(n/2);

      cout<<ans<<endl;
      if(n%2)
      {
            for(int i=1;i<=n;i++)
            {
                  for(int j=1;j<=n;j++)
                  {
                        cout<<ch;
                        if(ch=='C')
                              ch='.';
                        else
                              ch='C';
                  }
                  cout<<endl;
            }
      }
      else
      {
            for(int i=1;i<=n;i++)
            {
                  for(int j=1;j<=n;j++)
                  {
                        cout<<ch;
                        if(ch=='C')
                              ch='.';
                        else
                              ch='C';
                  }
                  cout<<endl;
                  if(ch=='C')
                        ch='.';
                  else
                        ch='C';
            }
      }
      return 0;
}
