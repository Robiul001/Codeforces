#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele,arr[55];
    vector<int> vec;
    vector<int> :: iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            vec.push_back(arr[i]);
    }
    cout<<vec.size()<<endl;
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    return 0;
}
