#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n>>str;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            reverse(str.begin(),str.begin()+i);
    }
    cout<<str<<endl;
    return 0;
}
