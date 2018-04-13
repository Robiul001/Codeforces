#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,in,cnt=1;
    cin>>n;
    cin>>in;
    temp=in;
    for(int i=1;i<n;i++)
    {
        cin>>in;
        if(temp!=in)
        {
            cnt++;
        }
        temp=in;
    }
    cout<<cnt;
    return 0;
}
