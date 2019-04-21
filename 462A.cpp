#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      string str1,str2,temp;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>temp;
            str1+=temp;
      }
      str2=str1;
      reverse(str1.begin(),str1.end());
      if(str1==str2)
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
      return 0;
}
