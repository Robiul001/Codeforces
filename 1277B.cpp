#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[200004],ans=0,tmp;
        set<int>st;        set<int>::iterator it;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                st.insert(arr[i]);
        }
        while(!st.empty())
        {
            ans++;
            it = st.end();
            it--;
            tmp = (*it)/2;
            st.erase(it);
            if(tmp%2==0)
                st.insert(tmp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
