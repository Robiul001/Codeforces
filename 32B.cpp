#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector <int> vec;
      vector <int> :: iterator it;
      string str;
      cin>>str;
      int n = str.size();
      int i=0;
     // for(int i=n-1;i>=0;i--)
     while(i!=n)
      {
            if(str[i]=='-' && str[i+1]=='.')
            {
                  vec.push_back(1);
                  i+=2;
            }
            if(str[i]=='-' && str[i+1]=='-')
            {
                  vec.push_back(2);
                  i+=2;
            }
            if(str[i]=='.')
            {
                  i++;
                  vec.push_back(0);
            }
      }

      for(it = vec.begin();it!=vec.end();it++)
            cout<<*it;
      return 0;
}
