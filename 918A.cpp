#include<bits/stdc++.h>
using namespace std;

int arr[10005];

int main()
{
      int n,f1=1,f2=1,f;
      cin>>n;
      arr[1]=1;
      arr[2]=1;
      for(int i=1;i<=n;i++)
      {
            f=f1+f2;
            arr[f]=1;
            f1=f2;
            f2=f;
            if(f>(n*2))
                  break;
      }

      for(int i=1;i<=n;i++)
      {
            if(arr[i]==1)
                  cout<<"O";
            else
                  cout<<"o";
      }
      return 0;
}
