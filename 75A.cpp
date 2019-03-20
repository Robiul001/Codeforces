#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int a,b,c,cnta=0,cntb=0,cntc=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
            if(a%10!=0)
            {
                  int temp=a%10;
                  cnta=(cnta*10)+temp;
            }
            a/=10;
      }
      a=0;
      while(cnta>0)
      {
            int temp=cnta%10;
            a=(a*10)+temp;
            cnta/=10;
      }

      while(b>0)
      {
            if(b%10!=0)
            {
                  int temp=b%10;
                  cntb=(cntb*10)+temp;
            }
            b/=10;
      }
      b=0;
      while(cntb>0)
      {
            int temp=cntb%10;
            b=(b*10)+temp;
            cntb/=10;
      }

      while(c>0)
      {
            if(c%10!=0)
            {
                  int temp=c%10;
                  cntc=(cntc*10)+temp;
            }
            c/=10;
      }
      c=0;
      while(cntc>0)
      {
            int temp=cntc%10;
            c=(c*10)+temp;
            cntc/=10;
      }
      if((a+b)==c)
            cout<<"YES"<<endl;
      else
            cout<<"NO"<<endl;
//      cout<<a<<" "<<b<<" "<<c;
      return 0;
}
