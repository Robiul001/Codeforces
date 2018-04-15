#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,temp;
    cin>>n>>m;
    temp=(n<m)?n:m;
    if(temp%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    return 0;
}
