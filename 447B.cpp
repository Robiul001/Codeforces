#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int sum =0,mx=0,n,k,arr[29];

    string str;
    cin>>str;
    cin>>k;

    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }

    n = str.size();

    for(int i=0;i<n;i++)
    {
        int tmp = str[i]-'a';
        sum = sum + ((i+1)*arr[tmp]);
    }
//    cout<<sum<<" "<<mx<<endl;

    for(int i=0;i<k;i++)
    {
        n++;
        sum = sum + (n*mx);
    }
    cout<<sum<<endl;
    return 0;
}
