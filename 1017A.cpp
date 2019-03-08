#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,arr[1002],temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        arr[i]=sum;
    }
    temp=arr[0];
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
