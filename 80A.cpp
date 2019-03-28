#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
      for(int i=2;i<n;i++)
            if(n%i==0)
                  return false;
      return true;
}

int main()
{
      int a,b;
      vector <int> prime;
      vector <int> :: iterator it;
      for(int i=2;i<=100;i++)
      {
            if(isPrime(i))
            {
                  prime.push_back(i);
            }
      }

//      for(it=prime.begin();it!=prime.end();it++)
//            cout<<*it<<" ";

      cin>>a>>b;
      it=find(prime.begin(),prime.end(),a);
      int x= it-prime.begin();
      it=find(prime.begin(),prime.end(),b);
      int y= it-prime.begin();

      if(y-x==1)
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
      return 0;
}
