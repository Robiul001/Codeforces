#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
      if(n==1)
            return false;
      for(int i=2;i*i<=n;i++)
      {
            if(n%i==0)
                  return false;
      }
      return true;
}


int main()
{
      vector <int> vec;
      vector <int> :: iterator it;
      int n,cnt1=0,cnt2=0,a,sum=0;;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>a;
            if(a==1)
                  cnt1++;
            else
                  cnt2++;
      }

      for(int i=0;i<n;i++)
      {
            if(cnt1 && cnt2)
            {
                  if(isPrime(sum+1))
                  {
                        vec.push_back(1);
                        cnt1--;
                        sum++;
                  }
                  else
                  {
                        vec.push_back(2);
                        cnt2--;
                        sum+=2;
                  }
            }
            else if(cnt1)
            {
                  vec.push_back(1);
                  cnt1--;
                  sum++;
            }
            else
            {
                  vec.push_back(2);
                  cnt2--;
                  sum+=2;
            }
      }

      for(it=vec.begin();it!=vec.end();it++)
      {
            cout<<*it<<" ";
      }

      return 0;
}
