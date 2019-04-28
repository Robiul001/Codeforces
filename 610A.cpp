#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long i,j,n,cnt=0;
      cin>>n;
      i=1;
      j=(n/2)-1;
      if(n%2==0)
      {
            while(i<j)
            {
                  //if(2*(i+j)==n) /// Codition ta dile Time Limit khai
                  cnt++;
                  i++;
                  j--;
            }
            cout<<cnt<<endl;
      }
      else
            cout<<0<<endl;
      return 0;
}
