#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<char>st;
        set<char>::iterator it;
        string str;
        cin>>str;
        int n = str.size();
        if(n==1)
        {
            cout<<str<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]==str[i+1])
                i++;
            else
                st.insert(str[i]);
        }
        for(it=st.begin();it!=st.end();it++)
            cout<<*it;
        cout<<endl;
        st.clear();
    }
    return 0;
}
