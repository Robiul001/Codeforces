/**==============================================*\
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,Start,End;
        int arr[300005];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Start = -1;
        End = n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<i)
                break;
            Start = i;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<n-1-i)
                break;
            End = i;
        }
        if(Start>=End)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

