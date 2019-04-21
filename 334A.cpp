#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,arr[10005];
      cin>>n;
      int jj=(n*n);
      for(int i=1;i<=jj;i++)
            arr[i]=i;
      int tmp=n/2;
      int m=1;
      int nn=jj;
      for(int i=1;i<=n;i++)
      {
            for(int j=0;j<tmp;j++)
            {
                  cout<<arr[m]<<" "<<arr[nn]<<" ";
                  m++;
                  nn--;
            }
            cout<<endl;
      }
      return 0;
}
