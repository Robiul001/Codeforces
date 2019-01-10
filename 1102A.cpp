#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    n%=4;
    if(n==1 || n==2)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
