#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r;
    cin>>l>>r;
    if(r-l <2 || (l%2!=0 && l+3>r))
    {
        cout<<-1<<endl;
        return 0;
    }
    if(l%2==0)
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    else
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    return 0;
}
