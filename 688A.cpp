#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,d,maxi=INT_MIN,cnt=0;
      string str;
      cin>>n>>d;
      while(d--)
      {
            cin>>str;
            if(str.find("0")!=string::npos)
            {
                  cnt++;
            }
            else
            {
                  maxi=max(maxi,cnt);
                  cnt=0;
            }
      }
      maxi=max(maxi,cnt);
      cout<<maxi<<endl;
      return 0;
}
