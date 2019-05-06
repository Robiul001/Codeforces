#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      char a,ch1,ch2;
      set <char> st1;
      set <char> st2;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            for(int j=0;j<n;j++)
            {
                  cin>>a;
                  if(i==j || i==(n-j-1))
                  {
                        st1.insert(a);
                        ch1=a;
                  }
                  else
                  {
                        st2.insert(a);
                        ch2=a;
                  }
            }
      }
      if(st1.size()==1 && st2.size()==1 && ch1!=ch2)
      {
            cout<<"YES"<<endl;
      }
      else
      {
            cout<<"NO"<<endl;
      }
      return 0;
}
