#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>:: iterator it;
    int arr[102],a,n,avg,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
        sum=sum+a;
    }
    int m=n/2;
    avg=(sum/m);
    if(n==2)
    {
        cout<<1<<" "<<2<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==avg && arr[i]!=0 && arr[j]!=0)
            {
                arr[i]=0;
                arr[j]=0;
                vec.push_back(i+1);
                vec.push_back(j+1);
            }
        }
    }
    //cout<<vec.size();
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
        it++;
        cout<<*it<<endl;
    }
    return 0;
}
