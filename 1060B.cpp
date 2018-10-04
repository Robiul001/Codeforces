#include<bits/stdc++.h>
using namespace std;

long long int digit_count(long long int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n/=10;
        //cout<<n<<endl;
    }
    return cnt;
}

int main()
{
    long long int n,m,a=0,b,cnt=0;
    cin>>n;
    m=digit_count(n)-1;
    //cout<<m<<endl;
    cnt+=m*9;
    while(m--)
    {
        a=(a*10)+9;
    }
    //cout<<a;
    b=n-a;
   // cout<<endl<<b;
    while(b!=0)
    {
        cnt+=b%10;
        b/=10;
    }
    cout<<cnt;
    return 0;
}
