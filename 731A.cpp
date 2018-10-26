#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch='a',ch1;
    int a,cnt=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        ch1=str[i];
        a=abs((int)ch-(int)ch1);
        cnt+=min(a,26-a);
        ch=ch1;
    }
    cout<<cnt;
    return 0;
}
