#include<bits/stdc++.h>
using namespace std;
int main()
{
      int x1,x2,x3,x4,x[5],a,b,c;
      cin>>x[0]>>x[1]>>x[2]>>x[3];
      sort(x,x+4);
      x1=x[0];
      x2=x[1];
      x3=x[2];
      a = (x1+x2-x3)/2;
      b = x1 - a;
      c = x3 - b;
      cout<<a<<" "<<b<<" "<<c<<endl;
      return 0;
}
