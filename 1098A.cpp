#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1,str2,str3,str4,str5;
    cin>>str>>str1>>str2>>str3>>str4>>str5;
    if(str[0]==str1[0] || str[0]==str2[0] || str[0]==str3[0] || str[0]==str4[0] || str[0]==str5[0])
    {
        cout<<"YES"<<endl;
    }
    else if(str[1]==str1[1] || str[1]==str2[1] || str[1]==str3[1] || str[1]==str4[1] || str[1]==str5[1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
