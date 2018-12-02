#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    stack<char> st;
    int n,cnt=0;
    char ch;
    cin>>str;
    n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='<' || str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            ch=st.top();
            if(str[i]=='>')
            {
                if(ch!='<')
                    cnt++;
            }
            else if(str[i]=='}')
            {
                if(ch!='{')
                    cnt++;
            }
            else if(str[i]==']')
            {
                if(ch!='[')
                    cnt++;
            }
            else
            {
                if(ch!='(')
                    cnt++;
            }
            st.pop();
        }
    }
    if(!st.empty())
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        cout<<cnt<<endl;
    }
    return 0;
}
