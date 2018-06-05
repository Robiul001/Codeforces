#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,c=0,cn=1,cnt=0;
    cin>>n;
    c+=i;
    while(cn<=n)
    {
        i++;
        cnt++;
        c+=i;
        cn+=c;
        //i++;
    }
    cout<<cnt;
    return 0;
}
