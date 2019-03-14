#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a,b;
      cin>>a>>b;
      if((a==0 && b==0))
           cout<<"No"<<endl;
      else if((b-1)==a || a==b || (a-1)==b)
            cout<<"Yes"<<endl;
      else
            cout<<"No"<<endl;
      return 0;
}
