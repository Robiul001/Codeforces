#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>st;
    multiset<int>::iterator it;
    int n,q;
    cin>>n>>q;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        st.insert(tmp);
    }
    int sum=0;
    st.erase(0);
    while(q--)
    {
        if(st.empty()) {cout<<0<<endl; continue;}
        it=st.begin();
        cout<<max(0,(*it-sum))<<endl;
        sum+=(*it-sum);
        st.erase(*it);

    }
    return 0;
}
