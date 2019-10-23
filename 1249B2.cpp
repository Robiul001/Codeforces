#include<bits/stdc++.h>
using namespace std;

int p[200006],ans[200006];
bool visited[200006];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>p[i];
            visited[i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==false)
            {
                vector<int>current;
                visited[i]=true;
                current.push_back(i);
                int j=i;
                while(!visited[p[j]])
                {
                    visited[p[j]] = true;
                    j = p[j];
                    current.push_back(j);
                }
                int sz = current.size();
                for(auto i : current)
                    ans[i] = sz;
            }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
