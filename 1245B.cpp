#include<bits/stdc++.h>
using namespace std;

char vec[105];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,ans=0;
        string str;
        memset(vec,'a',sizeof(vec));
        cin>>n;
        cin>>a>>b>>c;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='R')
            {
                if(b!=0)
                {
                    b--;
                    ans++;
                    vec[i]='P';
                }
            }
            if(str[i]=='P')
            {
                if(c!=0)
                {
                    c--;
                    ans++;
                    vec[i]='S';
                }
            }
            if(str[i]=='S')
            {
                if(a!=0)
                {
                    a--;
                    ans++;
                    vec[i]='R';
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            if(vec[i]=='a')
            {
                if(a!=0)
                {
                    a--;
                    vec[i]='R';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]=='a')
            {
                if(b!=0)
                {
                    b--;
                    vec[i]='P';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]=='a')
            {
                if(c!=0)
                {
                    c--;
                    vec[i]='S';
                }
            }
        }
        int tmp = ceil((double)n/2.0);
        if(ans<tmp)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<vec[i];
        }
        cout<<endl;
    }
    return 0;
}

