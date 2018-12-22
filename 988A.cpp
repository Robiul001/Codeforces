#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,chk=0;
    vector <int> vec;
    vector <int> :: iterator it;
    set <int> st;
    set <int> :: iterator it1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
        st.insert(a);
    }
    if(st.size()<k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(it1=st.begin();it1!=st.end();it1++)
    {
        if(chk==k)
            break;
        int t=0;
        int b=*it1;
        for(it=vec.begin();it!=vec.end();it++)
        {
            int c=*it;
            if(b==c)
            {
                cout<<t+1<<" ";
                vec[t]=0;
                break;
            }
            t++;
        }
        chk++;
    }
    return 0;
}
