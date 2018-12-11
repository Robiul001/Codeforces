#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,can[102]={0},city[102]={0},city2[102]={0},b,c,a,arr[102]={0};
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            cin>>city[j];
            city2[j]=city[j];
        }
        sort(city2,city2+n);
        int tt=city2[n-1];
        for(int j=0;j<n;j++)
        {
            if(city[j]==tt)
            {
                c=j;
                break;
            }
        }
        can[c]++;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=can[i];
    }
    sort(can,can+n);
    int temp=can[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}
