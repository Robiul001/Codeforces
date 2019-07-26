#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    cin>>n;
    vector <int> vec;
    vector <int> :: iterator it;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        if(tmp%2==0)
            even=1;
        else
            odd=1;
        vec.push_back(tmp);
    }
    if(even==1 && odd==1)
        sort(vec.begin(),vec.end());

    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    return 0;
}
