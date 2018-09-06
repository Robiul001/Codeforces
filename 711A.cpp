#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    char ch[1001][6];
    cin>>n;
    /// Input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>ch[i][j];
        }
    }
    /// Configuration
    for(int i=0;i<n;i++)
    {
        if(ch[i][0]=='O' && ch[i][1]=='O')
        {
            cnt++;
            ch[i][0]='+';
            ch[i][1]='+';
            break;
        }
        else if(ch[i][3]=='O' && ch[i][4]=='O')
        {
            cnt++;
            ch[i][3]='+';
            ch[i][4]='+';
            break;
        }
        else{}
    }
    //cout<<endl<<endl;
    /// Output
    if(cnt==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<ch[i][j];
            }
        cout<<endl;
        }
    }
    return 0;
}
