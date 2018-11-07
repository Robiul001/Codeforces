#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k;
    cin>>n>>p>>k;
    int j,l;
    vector<int> vec1,vec2;
    vector<int> :: iterator it;
    j=p-1;
    l=p+1;
    for(int i=0;i<k;i++)
    {
        if(j<1)
            break;
        vec1.push_back(j);
        j--;
    }
     for(int i=0;i<k;i++)
    {
        if(l>n)
            break;
        vec2.push_back(l);
        l++;

    }
    sort(vec1.begin(),vec1.end());
    if(vec1.size()>=1){
    it=vec1.begin();
    if(*it>1)
    {
        cout<<"<< ";
    }
    for(it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<*it<<" ";
    }
    }
    cout<<"("<<p<<") ";
    if(vec2.size()>=1){
    for(it=vec2.begin();it!=vec2.end();it++)
    {
        cout<<*it<<" ";
    }
    it=vec2.end()-1;
    if(*it<n)
    {
        cout<<">>";
    }}
    return 0;
}
