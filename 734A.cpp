#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnta=0,cntd=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        //cin>>ch;
        if(str[i]=='A')
        {
            cnta++;
        }
        else
        {
            cntd++;
        }
    }
    if(cnta==cntd)
    {
        cout<<"Friendship";
    }
    else if(cnta>cntd)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
    return 0;
}
