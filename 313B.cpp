#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int arr[100005],n,m,li,ri;
    cin>>str;
    cin>>m;
    str.insert(0,"$");
    n=str.size();
    for(int i=1;i<n;i++)
    {
        if(str[i-1]==str[i])
        {
            arr[i]=arr[i-1]+1;
        }
        else
        {
            arr[i]=arr[i-1];
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>li>>ri;
        cout<<arr[ri]-arr[li]<<endl;
    }
    return 0;
}
