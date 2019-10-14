#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k,tmp1,tmp2;
        cin>>a>>b>>c>>d>>k;
        tmp1=ceil((double)a/(double)c);
        tmp2=ceil((double)b/(double)d);
       // cout<<tmp1<<" "<<tmp2<<endl;
        if((tmp1+tmp2)>k)
            cout<<-1<<endl;
        else
            cout<<tmp1<<" "<<tmp2<<endl;
    }
    return 0;
}
