#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,sum=0;
      string str;
      cin>>n;
      cin>>str;
      for(int i=0;i<n;i++)
      {
            int temp=str[i]-'0';
            if(temp%2==0)
                  sum+=(i+1);
      }
      cout<<sum<<endl;
      return 0;
}
