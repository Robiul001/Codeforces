#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,k2,k3,k5,k6,cnt=0;
    cin>>k2>>k3>>k5>>k6;
    k=((k2<k5)&&(k2<k6)) ? k2:((k5<k6)?k5:k6);
    cnt+=k*256;
    k2-=k;
    k=(k2<k3)?k2:k3;
    cnt+=k*32;
    cout<<cnt;
    return 0;
}
