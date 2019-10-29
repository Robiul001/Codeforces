#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if((b-a)<2 && b>=a)
    {
        if(b==a)
        {
            cout<<a<<"0"<<" "<<b<<"1"<<endl;
        }
        else
        {
            cout<<a<<"9"<<" "<<b<<"0"<<endl;
        }
    }
    else if(a==9 && b==1)
    {
        cout<<99<<" "<<100<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
