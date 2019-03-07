#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int n,arr[1005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(arr[i]==1)
            vec.push_back(arr[i-1]);
    }
    vec.push_back(arr[n-1]);
    cout<<vec.size()<<endl;
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    return 0;
}
