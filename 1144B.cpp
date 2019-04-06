#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector <int> odd;
      vector <int> even;
      int n,a;
      cin>>n;
      while(n--)
      {
            cin>>a;
            if(a%2==1)
                  odd.push_back(a);
            else
                  even.push_back(a);
      }
      sort(odd.begin(),odd.end());
      sort(even.begin(),even.end());
      if((even.size()==odd.size()) || (even.size()-1==odd.size()) || (even.size()==odd.size()-1))
            cout<<0<<endl;
      else
      {
            long long int sum=0;
            if(even.size()<odd.size())
            {
                  int aa=(odd.size()-even.size());
                  for(int i=0;i<aa-1;i++)
                        sum+=odd[i];
            }
            else
            {
                  int aa=(even.size()-odd.size());
                  for(int i=0;i<aa-1;i++)
                        sum+=even[i];
            }
            cout<<sum<<endl;
      }
      return 0;
}
