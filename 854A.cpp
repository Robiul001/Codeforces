#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,b;
    cin>>n;
    if((int)n%2!=0)
    {
        a = floor(n/2);
        b = ceil(n/2);
    }
    else
    {
        if((int)n%4==0)
        {
            a = floor(n/2)-1;
            b = ceil(n/2)+1;
        }
        else
        {
            a = floor(n/2)-2;
            b = ceil(n/2)+2;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
