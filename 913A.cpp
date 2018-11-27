#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,aa;
    cin>>n>>m;
    if(n>=27)
        cout<<m<<endl;
    else
    {
        aa=pow(2,n);
        cout<<m%aa<<endl;
    }
    return 0;
}
