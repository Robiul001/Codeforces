#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector <int> ass;
      stack <int> des;
      int arr[200007];
      int n;
      cin>>n;

      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }

      sort(arr,arr+n);
      des.push(arr[0]);

      for(int i=1;i<n;i++)
      {
            if(arr[i]!=des.top())
                  des.push(arr[i]);
            else
                  ass.push_back(arr[i]);
      }
      int cnt=0;
      for(int i=1;i<ass.size();i++)
            if(ass[i-1]==ass[i])
                  cnt++;

      if(cnt==0)
      {
            cout<<"YES"<<endl;

            cout<<ass.size()<<endl;
            for(int i=0;i<ass.size();i++)
                  cout<<ass[i]<<" ";
            cout<<endl;

            cout<<des.size()<<endl;
            while(!des.empty())
            {
                  int x=des.top();
                  cout<<x<<" ";
                  des.pop();
            }
      }
      else
            cout<<"NO"<<endl;

      return 0;
}
