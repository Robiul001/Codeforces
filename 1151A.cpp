#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      char str[52];
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>str[i];
      }

      char ch1,ch2,ch3,ch4;
      int mini=INT_MAX;
      int sum=0;

      for(int i=0;i<n-3;i++)
      {
            ch1=str[i];
            ch2=str[i+1];
            ch3=str[i+2];
            ch4=str[i+3];
            sum=0;
//4
//ZYAZ
            sum += min(abs(ch1-'A'),abs(ch1-'Z')+1);
           // cout<<sum<<endl;
            sum += min(abs(ch2-'C'),abs(ch2-'Z')+3);
            //cout<<sum<<" "<<1+abs('T'-ch3)<<endl;
            sum += min(abs(ch3-'T'),abs('T'-'Z')+1+abs('A'-ch3));
            //cout<<sum<<endl;
            sum += min(abs(ch4-'G'),abs(ch4-'Z')+1+abs('A'-'G'));

            mini = min(mini,sum);
      }
      cout<<mini<<endl;
      return 0;
}
