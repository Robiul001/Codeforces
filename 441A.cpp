#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,k,s;
    set <int> st;
    set <int> :: iterator it;
    cin>>n>>v;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>s;
            if(v>s)
            {
                st.insert(i);
            }
        }
    }
    cout<<st.size()<<endl;
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
