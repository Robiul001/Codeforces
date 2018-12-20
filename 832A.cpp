#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
//    while(n>=k)
//    {
//        n-=k;
//        if(check==0)
//        {
//            check=1;
//            cnt1+=k;
//        }
//        else
//        {
//            check=0;
//            cnt2+=k;
//        }
//    }
//    if(cnt1>cnt2)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;

    n=n/k;
    if(n%2!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
