#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    int arr[100002];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cout<<upper_bound(arr,arr+n,x)-arr<<endl;
    }

//    int n,m,x,a;
//    cin>>n;
//    vector <int> vec;
//    for(int i=0;i<n;i++)
//    {
//        cin>>a;
//        vec.push_back(a);
//    }
//
//    vector <int> :: iterator it;
//
//    cin>>m;
//    for(int i=0;i<m;i++)
//    {
//        cin>>x;
//        it=upper_bound(vec.begin(),vec.end(),x);
//        cout<<it-vec.begin()<<endl;
//    }

    return 0;
}
