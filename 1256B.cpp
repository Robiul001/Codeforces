#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ii,tmp,n,arr[105];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        ii=1;
        for(int i=1;i<=n;i=i+1)
        {
            for(int j=ii;j<=n;j++)
            {
                if(i==arr[j])
                {
                    if(ii==j)
                    {
                        ii++;
                        break;
                    }
                    for(int k=j-1;k>=ii;k--)
                    {
                        swap(arr[k],arr[k+1]);
                    }
                    ii=j;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
