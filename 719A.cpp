#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1 && arr[0]!=15 && arr[0]!=0 )
        cout<<-1<<endl;
    else if(arr[n-1]==0)
        cout<<"UP"<<endl;
    else if(arr[n-1]==15)
        cout<<"DOWN"<<endl;
    else
    {
        if(arr[n-1]>arr[n-2] && arr[n-1]!=15)
            cout<<"UP"<<endl;
        else
            cout<<"DOWN"<<endl;
    }
    return 0;
}
