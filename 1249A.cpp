#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,chk=0;
        int arr[105];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
            if(arr[i]+1==arr[i+1])
                chk=1;
        if(chk==1)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
