#include<bits/stdc++.h>
using namespace std;
int main()
{
      int i,n;
      string str;
      int digit[10];
      cin>>n>>str;
      for(i=1;i<=9;i++)
            cin>>digit[i];
      for(i=0;i<n;i++)
      {
            int temp = str[i] - '0';
            if(digit[temp]>temp)break;
      }
      for(i;i<n;i++)
      {
            int temp = str[i]-'0';
            if(digit[temp]<temp)break;
            str[i] = (digit[temp] + '0');
      }
      cout<<str<<endl;
      return 0;
}

