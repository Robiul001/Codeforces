/**==============================================*\
Bismillahir Rahmanir Rahim
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[105];
    int n,m;
    set<int>st;
    set<int>::iterator it,it1;
    deque<string>deq;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string tmp1,tmp2;
            tmp1 = arr[i];
            tmp2 = arr[j];
            reverse(tmp2.begin(),tmp2.end());
            it = st.find(i);
            it1 = st.find(j);
            if(tmp1==tmp2 && it==st.end() && it1==st.end())
            {
                st.insert(i);
                st.insert(j);
                deq.push_front(arr[i]);
                deq.push_back(arr[j]);
//                cout<<tmp1<<endl;
            }
        }
    }
    string ans="";
    bool chk = false;
    for(int i=0;i<n;i++)
    {
        it = st.find(i);
        if(it==st.end())
        {
            string tmp2,tmp3;
            tmp2 = arr[i];
            tmp3 = arr[i];
            reverse(tmp3.begin(),tmp3.end());
            if(tmp2==tmp3)
            {
                chk = true;
                ans = tmp2;
            }
        }
    }
    int cnt= 0;
    int sz = deq.size();
    if(chk)
    {
        cnt = m;
    }
    cnt += (sz*m);
    cout<<cnt<<endl;
    for(int i=0;i<(sz/2);i++)
        cout<<deq[i];
    if(chk)
        cout<<ans;
    for(int i=(sz/2);i<sz;i++)
        cout<<deq[i];
    return 0;
}

