#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <string> st;
    int j=0,n;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        st.insert(str);
        if(i>(j+st.size()))
        {
            cout<<"YES"<<endl;
            j++;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
