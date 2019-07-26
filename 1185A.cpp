#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,cnt=0,arr[4];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    cin>>d;
    sort(arr,arr+3);
    a=arr[0];
    b=arr[1];
    c=arr[2];

    if((b-a)<d)
        cnt+=(d-(b-a));
    if((c-b)<d)
        cnt+=(d-(c-b));
    cout<<cnt<<endl;
}
