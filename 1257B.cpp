#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,x1;
        cin>>x>>y;
        if(x>=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            x1=0;
            while(x<y && x>=2)
            {
                if(x%2==0)
                {
                    x = (3*x)/2;
                }
                else
                {
                    x--;
                }
                x1++;
                if(x1==1004)
                    break;
            }
            if(x>=y)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
