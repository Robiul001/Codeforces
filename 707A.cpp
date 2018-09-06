#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    char ch;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
            {
                cnt++;
            }
        }
    }
    if(cnt>0)
    {
        cout<<"#Color";
    }
    else
    {
        cout<<"#Black&White";
    }
    return 0;
}
