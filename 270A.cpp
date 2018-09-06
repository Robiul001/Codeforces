#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,n;
    float n1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        n1=360/(180-(float)a);
        n=(int)n1;
        //cout<<n<<" "<<n1<<endl;
        if(n1==(float)n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
