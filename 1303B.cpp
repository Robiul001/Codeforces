/**==============================================*\
Bismillahir Rahmanir Rahim
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,g,b,tmp,ans,tmp2;
        cin>>n>>g>>b;
        tmp = ceil((double)n/2.0);
        tmp2 = ceil((double)tmp/(double)g);
        ans = tmp2 * g;
        ans += ((tmp2-1)*b);
        if(tmp%g!=0)
        {
            ans -= g;
            ans += (tmp%g);
        }
        cout<<max(n,ans)<<endl;
    }
    return 0;
}
