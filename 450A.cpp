#include<bits/stdc++.h>
using namespace std;

class school{
public:
    int key;
    int value;
    school(int x,int y)
    {
        key=x;
        value=y;
    }
};

int main()
{
    int n,m,a,aa;
    cin>>n>>m;
    deque <school> mydeq;
    deque <school> :: iterator it;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        mydeq.push_back(school(i,a));
    }
    while(!mydeq.empty())
    {
        it=mydeq.begin();
        aa=(*it).key;
        if((*it).value<=m)
            mydeq.pop_front();
        else
        {
            mydeq.push_back(school((*it).key,(*it).value-m));
            mydeq.pop_front();
        }
    }
    cout<<aa<<endl;
    return 0;
}
