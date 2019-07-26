#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    deque<int>deq;
    int n,arr[100005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    deq.push_back(arr[n-1]);

    int chk=0;

    if(n%2==1)
    {
        for(int i=n-2;i>=0;i-=2)
        {
            if(chk==0)
            {
                chk=1;
                deq.push_back(arr[i]);
                deq.push_front(arr[i-1]);
            }
            else
            {
                chk=0;
                deq.push_back(arr[i-1]);
                deq.push_front(arr[i]);
            }
        }
    }
    else
    {
        for(int i=n-2;i>0;i-=2)
        {
            if(chk==0)
            {
                chk=1;
                deq.push_back(arr[i]);
                deq.push_front(arr[i-1]);
            }
            else
            {
                chk=0;
                deq.push_back(arr[i-1]);
                deq.push_front(arr[i]);
            }
        }
        if(n%2==0)
        {
            if(chk==0)
                deq.push_back(arr[0]);
            else
                deq.push_front(arr[0]);
        }
    }

    int flag=0,a,b;

    while(!deq.empty())
    {
        //cout<<deq.front()<<" ";
        a = deq.front();
        deq.pop_front();
        vec.push_back(a);
    }

//    for(it=vec.begin();it!=vec.end();it++)
//            cout<<*it<<" ";

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if((vec[n-1]+vec[1])<=vec[0])
                flag=1;
        }
        else if(i==n-1)
        {
            if((vec[n-2]+vec[0])<=vec[n-1])
                flag=1;
        }
        else
        {
            if((vec[i-1]+vec[i+1])<=vec[i])
                flag=1;
        }
    }

    if(flag==1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(it=vec.begin();it!=vec.end();it++)
            cout<<*it<<" ";
    }

    return 0;
}
