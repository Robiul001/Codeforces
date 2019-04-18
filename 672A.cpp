#include<bits/stdc++.h>
using namespace std;
char arr[1105];
int main()
{
      int k=1;
      int n;
      for(int i=1;i<400;i++)
      {
            string str = to_string(i);
            for(int j=0;j<str.size();j++)
            {
                  arr[k]=str[j];
                  k++;
            }
      }
      cin>>n;
      cout<<arr[n]<<endl;
}
