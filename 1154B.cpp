#include<bits/stdc++.h>
using namespace std;
int main()
{
      set <int> st;
      set <int> :: iterator it;
      int n,a,b,nn,tmp,cnt=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
            cin>>tmp;
            st.insert(tmp);
      }
      nn = st.size();
      it = st.begin();
      a = *(it);
      it = st.end();it--;
      b = *it;
      //cout<<nn<<endl;
      while(a<b)
      {
            cnt++;
            a++;
            b--;
      }
      if(a!=b)
      {
            it = st.begin();
            a = *(it);
            it = st.end();it--;
            b = *it;
            cnt = b-a;
            a = b;
            //cout<<a<<" "<<b<<endl;
      }
//      cout<<cnt<<endl;
//      cout<<a<<" "<<b<<endl;
////      if(nn == 2)
////      {
////            int ans = (a + b)/ 2;
////            cout<<ans<<endl;
////      }
      int i=0,arr[102],flag=0;;
      for(it = st.begin();it!=st.end();it++)
      {
            arr[i] = *it;
            i++;
      }
      arr[0] = a;
      arr[nn-1] = b;
      for(int i=0;i<nn;i++)
      {
            if(arr[i]!=a)
                  flag=1;
      }
      if(flag == 0 && a==b)
            cout<<cnt<<endl;
      else
            cout<<-1<<endl;
      return 0;
}

