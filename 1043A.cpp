#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int n,k,mex,a,cnt=0,cnt1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cnt+=a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    it=vec.end()-1;
    k=*it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cnt1+=k-*it;
    }
    if(cnt<cnt1)
    {
        cout<<k;
        return 0;
    }
    while(cnt>=cnt1)
    {
        //cout<<k<<" "<<cnt1<<endl;
        k++;
        cnt1+=n;
    }
    cout<<k;
    return 0;
}
