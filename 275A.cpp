#include<bits/stdc++.h>
using namespace std;

int arr[5][5];

int main()
{
      /// for Input
      for(int i=1;i<=3;i++)
            for(int j=1;j<=3;j++)
                  cin>>arr[i][j];
      /// for Output
      for(int i=1;i<=3;i++)
      {
            for(int j=1;j<=3;j++)
            {
                  cout<<(arr[i][j]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j]+arr[i-1][j]+1)%2;
            }
            cout<<endl;
      }
      return 0;
}
