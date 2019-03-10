#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,k;
        pair <int,int> pr[102];
        vector <int> vec;
        vector <int> :: iterator it;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
                cin>>pr[i].first;
                pr[i].second=i+1;
        }
        sort(pr,pr+n);

        for(int i=0;i<n;i++)
        {
                if(pr[i].first<=k)
                {
                        k-=pr[i].first;
                        vec.push_back(pr[i].second);
                }
        }


        if(vec.size()==0)
                cout<<vec.size()<<endl;
        else
        {
                cout<<vec.size()<<endl;
                for(it=vec.begin();it!=vec.end();it++)
                        cout<<*it<<" ";
        }
        return 0;
}
