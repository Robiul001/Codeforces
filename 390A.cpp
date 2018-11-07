#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,y;
     cin>>n;
     set<int> st;
     set<int> st1;
     while(n--)
     {
         cin>>x>>y;
         st.insert(x);
         st1.insert(y);
     }
     cout<<min(st.size(),st1.size());
    return 0;
}
