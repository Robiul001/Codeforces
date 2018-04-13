#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str;
    cin>>str1>>str2;
    int arr[1000];
    int l=str1.size();
    for(int i=0;i<l;i++)
    {
        if(((str1[i]=='0')&&(str2[i]=='0'))||((str1[i]=='1')&&(str2[i]=='1')))
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
    for(int i=0;i<l;i++)
    {
        cout<<arr[i];
    }
    //cout<<str;
    return 0;
}
