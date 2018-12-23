#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[102]={0};
    int n,a,cnt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
    }
    cnt=arr[0];
    for(int i=1;i<=100;i++)
    {
        if(cnt<arr[i])
            cnt=arr[i];
    }
    cout<<cnt<<endl;
    return 0;
}
