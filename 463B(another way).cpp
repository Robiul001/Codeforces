#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    vector <int> vec;
    vector <int> :: iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        vec.push_back(h);
    }
    it=max_element(vec.begin(),vec.end());
    cout<<*it<<endl;
    return 0;
}
