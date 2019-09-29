#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> st;
    vector <int> vec;
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int tmp,x = i;
        while(x!=0)
        {
            tmp = x % 10;
            x = x / 10;
            vec.push_back(tmp);
            st.insert(tmp);
        }
        if(vec.size()==st.size())
        {
            cout<<i<<endl;
            return 0;
        }
        vec.clear();
        st.clear();
    }
    cout<<-1<<endl;
    return 0;
}
