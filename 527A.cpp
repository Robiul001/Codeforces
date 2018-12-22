#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum=0,temp;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a>=b)
        {
            sum+=(a/b);
            a%=b;
        }
        else
        {
            sum+=(b/a);
            b%=a;
        }
    }
    cout<<sum<<endl;
    return 0;
}
