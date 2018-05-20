#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int link=0,pearl=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='o')
        {
            pearl++;
        }
        else
        {
            link++;
        }
    }
    if(pearl==0 || link%pearl==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}