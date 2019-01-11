#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

    char ch;
    long long int n,x=0,y=0,h,w;
    cin>>n;
    while(n--)
    {
        cin>>ch>>h>>w;
        if(h>w) swap(h,w);
        if(ch=='+')
        {
            x=max(x,h);
            y=max(y,w);
        }
        else
        {
            if(x>h || y>w)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
