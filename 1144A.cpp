#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      string str;
      cin>>n;
      while(n--)
      {
            char check[105];
            set <char> st;
            cin>>str;
            int tt=0;
            int temp=str.size();
            for(int i=0;i<str.size();i++)
            {
                  check[i]=str[i];
                  st.insert(str[i]);
            }
                  sort(check,check+temp);
                  for(int i=1;i<str.size();i++)
                  {
                        if(check[i]-check[i-1]!=1)
                        {
                              tt=1;
                              cout<<"No"<<endl;
                              break;
                        }
                  }
                  if(tt!=1)
                        cout<<"YES"<<endl;
      }
      return 0;
}
