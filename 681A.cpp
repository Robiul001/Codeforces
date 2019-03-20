#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,before,after,cnt=0;
      string handle;
      cin>>n;
      while(n--)
      {
            cin>>handle>>before>>after;
            if(before>=2400 && after>before)
                  cnt++;
      }
      if(cnt)
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
}
