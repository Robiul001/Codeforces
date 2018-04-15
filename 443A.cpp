#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1002];
    int cnt=0;
    //cin>>str;
    gets(str);
    string str2=str;
    int len=strlen(str);
    sort(str2.begin(),str2.end());
    //cout<<str2;
    //cout<<len<<endl;
    for(int i=0;i<len-1;i++)
    {
        if(isalpha(str2[i])&&str2[i]!=str2[i+1])
        {
            cnt++;
        }
        //cout<<str[i]<<" ";
    }
    cout<<cnt;
    return 0;
}
