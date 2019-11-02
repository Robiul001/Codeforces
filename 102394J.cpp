#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n<=5)
            cout<<-1<<endl;
        else
        {
            if(n%2==0)
                cout<<2<<" "<<n-2<<endl;
            else
                cout<<3<<" "<<n-3<<endl;
        }
    }
    return 0;
}
