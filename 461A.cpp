#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[300005],sum=0,score;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    score=sum;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        score+=arr[i];
        score+=(sum-arr[i]);
        sum-=arr[i];
    }
    cout<<score<<endl;
    return 0;
}
