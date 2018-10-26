#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str[0]!='9' && str[0]>'4')
        cout<<'9'-str[0];
    else
        cout<<str[0];
    for(int i=1;i<str.size();i++)
    {
        if(str[i]>'4')
            cout<<'9'-str[i];
        else
            cout<<str[i];
    }
    return 0;
}
