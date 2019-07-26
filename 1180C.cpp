#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<long long int>deq;
    int n,q,mx=INT_MIN,indexofmx;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        if(mx<tmp)
        {
            mx=tmp;
            indexofmx=i;
        }
    }

    vector <pair<long long int,long long int> > vec;

    vec.push_back({0,0});

    for(int i=1;i<=indexofmx;i++)
    {
        long long int a = deq.front();
        deq.pop_front();
        long long int b = deq.front();
        deq.pop_front();
        if(a<b)
        {
            deq.push_front(b);
            deq.push_back(a);
        }
        else
        {
            deq.push_front(a);
            deq.push_back(b);
        }
        vec.push_back({a,b});
    }

    vector <long long int> arr;
    while(!deq.empty())
    {
        arr.push_back(deq.front());
        deq.pop_front();
    }
    /// for Query
    while(q--)
    {
        int tmp;
        cin>>tmp;
        if(tmp<=indexofmx)
        {
            cout<<vec[tmp].first<<" "<<vec[tmp].second<<endl;
            continue;
        }
        int second = tmp - indexofmx;
        second = second % (n-1);
        if(second==0)
            second = n-1;
        cout<<arr[0]<<" "<<arr[second]<<endl;
    }
    return 0;
}
