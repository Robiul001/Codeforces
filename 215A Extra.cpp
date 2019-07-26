#include<bits/stdc++.h>
using namespace std;

int arr[10004];

int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    int n,m,arrn[52],arrm[52];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arrn[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>arrm[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arrm[j]%arrn[i]==0)
                vec.push_back(arrm[j]/arrn[i]);
        }
    }

    sort(vec.begin(),vec.end());
    int ans=0;
    for(it=vec.begin();it!=vec.end();it++)
    {
        if(*it==*(vec.end()-1))
            ans++;
        //cout<<*it<<" ";
    }

    //cout<<arr[3]<<endl;
    for(int i=1;i<=10001;i++)
    {
        ans=max(ans,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}
