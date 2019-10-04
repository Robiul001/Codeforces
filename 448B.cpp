#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int n = s.size();
    int m = t.size();
    bool autom = false;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(j<m && s[i]==t[j])
            j++;
        if(j == m)
            autom = true;
    }
    int cnt[28]={0};
    for(int i=0;i<n;i++)
        cnt[s[i]-'a']++;
    for(int i=0;i<m;i++)
        cnt[t[i]-'a']--;

    bool sarray = true;
    bool both = true;

    for(int i=0;i<26;i++)
    {
        sarray = sarray & (cnt[i]==0);
        both = both & (cnt[i]>=0);
    }

    if(autom)
        cout<<"automaton"<<endl;
    else if(sarray)
        cout<<"array"<<endl;
    else if(both)
        cout<<"both"<<endl;
    else
        cout<<"need tree"<<endl;
    return 0;
}
