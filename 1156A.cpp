#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,arr[105];
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      for(int i=0;i<n-1;i++)
      {
            if((arr[i]==2 && arr[i+1]==3) || (arr[i]==3 && arr[i+1]==2))
            {
                  cout<<"Infinite"<<endl;
                  return 0;
            }
      }
      int temp = arr[0],cnt=0;
      for(int i=1;i<n;i++)
      {
            //cout<<temp<<" ";
            if((temp==2 && arr[i]==1) || (temp==1 && arr[i]==2))
                  cnt+=3;
            if((temp==3 && arr[i]==1) || (temp==1 && arr[i]==3))
                  cnt+=4;
            temp = arr[i];
      }
      for(int i=0;i<n-2;i++)
      {
            //cout<<temp<<" ";
            if(arr[i]==3 && arr[i+1]==1 && arr[i+2]==2)
                  cnt--;
      }
      cout<<"Finite"<<endl;
      cout<<cnt<<endl;
      return 0;
}
