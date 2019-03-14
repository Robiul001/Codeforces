#include<bits/stdc++.h>
using namespace std;
int main()
{
      int na,nb,k,m,arra[100005],arrb[100005];
      cin>>na>>nb>>k>>m;
      for(int i=0;i<na;i++)
            cin>>arra[i];
      for(int i=0;i<nb;i++)
            cin>>arrb[i];
      if(arra[k-1]<arrb[m-1])
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
      return 0;
}
