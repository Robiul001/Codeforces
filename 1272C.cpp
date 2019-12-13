#include<bits/stdc++.h>
using namespace std;

int arr[28];

int main()
{
    char ch;
    int n,k,pos;
    long long int ans=0,last=0;
    string str;
    cin>>n>>k;
    cin>>str;
    for(int i =0;i<k;i++)
    {
        cin>>ch;
        pos = ch - 'a';
        arr[pos]=1;
    }
    for(int i=0;i<n;i++)
    {
        ch = str[i];
        pos = ch - 'a';
        if(arr[pos]==1)
        {
            ans+=(i-last)+1;
            //cout<<(i-last)+1<<" ";
        }
        else
        {
            last = i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
