#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100005],mn=INT_MAX,index=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>=0)
            temp=-temp-1;

        arr[i]=temp;

        if(mn>temp && temp!=-1)
        {
            mn=temp;
            index=i;
        }
    }
    if(n%2==1)
        arr[index]=-arr[index]-1;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
