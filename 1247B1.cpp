#include<bits/stdc++.h>
using namespace std;

int arr[200006];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mn = INT_MAX;
        int n,k,d,sz;
        set<int>st;
        cin>>n>>k>>d;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(i+d<=n)
            {
                //cout<<"Robiul"<<endl;
                for(int j=i;j<i+d;j++)
                {
                    st.insert(arr[j]);
                }
            sz = st.size();
            mn = min(mn,sz);
            st.clear();
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
