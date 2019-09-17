#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int tmp = arr[i];
            cnt++;
            for(int j=0;j<n;j++)
            {
                if(arr[j]%tmp==0)
                    arr[j]=0;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
