#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<pair<int,int>,int>mp;
        int n,x=0,y=0,l,r,mn;
        string str;
        cin>>n;
        cin>>str;
        mp[make_pair(0,0)]=0;
        mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='L')
                x--;
            else if(str[i]=='R')
                x++;
            else if(str[i]=='U')
                y++;
            else
                y--;
            if(mp.find(make_pair(x,y))!=mp.end())
            {
                int curr = i+1;
                int prev = mp[make_pair(x,y)]+1;
                if(curr-prev+1<mn)
                {
                    mn = curr-prev+1;
                    r = curr;
                    l = prev;
                }
            }
            mp[make_pair(x,y)] = i+1;
//            if(mn == INT_MAX)
//                cout<<-1<<endl;
//            else
//                cout<<l<<" "<<r<<endl;
        }
        if(mn == INT_MAX)
            cout<<-1<<endl;
        else
            cout<<l<<" "<<r<<endl;
    }

    return 0;
}
