#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2,cnt=0,cnt1=0;
    string str,str1,str2;
    cin>>str1>>str2>>str;
    n1=str1.size();
    n2=str2.size();
    n=str.size();
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str1[i]==str[j])
            {
                str[j]='*';
                break;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        if(str[i]=='*')
        {
            cnt++;
        }
        //cout<<str[i];
    }


    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str2[i]==str[j])
            {
                str[j]='+';
                break;
            }
        }
    }


    /// print output


    for(int i=0;i<n;i++)
    {
        if(str[i]=='+')
        {
            cnt1++;
        }
        //cout<<str[i];
    }
   // cout<<n<<"   "<<cnt;

   if(cnt==n1 && cnt1==n2)
   {
      if((cnt+cnt1)==n)
       {
           cout<<"YES";
       }
       else
       {
           cout<<"NO";
       }
   }
   else
   {
       cout<<"NO";
   }
    return 0;
}
