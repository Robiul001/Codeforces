#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    string str;
    //char str[105];
    cin>>n;
    cin>>str;
    /*for(int i=0;i<n;i++)
    {
        cin>>str;    
    }*/
    for(int i=0;i<n;i++)
    {
        if(i+2<n)
        {
            if(str[i]=='x' && str[i+1]=='x' && str[i+2]=='x')
            {
                cnt++;
            }    
        }
    }
    cout<<cnt;
    return 0;
}