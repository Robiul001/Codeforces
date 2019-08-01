#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tmp;
    cin>>n;
    tmp = n%10;
    if(tmp<=5)
        cout<<n-tmp<<endl;
    else
        cout<<n+(10-tmp)<<endl;
}
