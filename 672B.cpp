#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set <char> st;
    int n;
    string str;
    cin>>n>>str;
    if(n>26)
        cout<<-1<<endl;
    else
    {
        set <char> st(str.begin(),str.end());
        cout<<n-st.size()<<endl;
    }
    return 0;
}
