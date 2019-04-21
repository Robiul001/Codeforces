#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,t;
      int arr[102][2];
      cin>>n>>t;
      for(int i=0;i<n;i++)
            cin>>arr[i][0]>>arr[i][1];

      int mini=INT_MAX,indx,dist;
      for(int i=0;i<n;i++)
      {
            int cnt=0;
            int tmp=arr[i][0];
            while(tmp<t)
            {
                  tmp+=arr[i][1];
            }
            if(mini>tmp)
            {
                  indx=i+1;
                  mini=tmp;
            }
      }
      cout<<indx<<endl;
      return 0;
}
