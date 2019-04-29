#include<bits/stdc++.h>
using namespace std;

char arr[55][55];

int main()
{
      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=n;j++)
            {
                  cin>>arr[i][j];
            }
      }

      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=n;j++)
            {
                  if(arr[i][j]=='.' && arr[i-1][j]=='.' && arr[i+1][j]=='.' && arr[i][j-1]=='.' && arr[i][j+1]=='.')
                  {
                        arr[i][j]='#';
                        arr[i-1][j]='#';
                        arr[i+1][j]='#';
                        arr[i][j-1]='#';
                        arr[i][j+1]='#';
                  }
            }
      }
      int cnt=0;
      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=n;j++)
            {
                  if(arr[i][j]=='.' )
                  {
                        cnt++;
                  }
            }
      }
      if(cnt==0)
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
      return 0;
}
