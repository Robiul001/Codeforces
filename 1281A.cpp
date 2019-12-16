#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int len;
        cin>>str;
        len = str.size();
        if(str[len-1]=='o' && str[len-2]=='p')
            cout<<"FILIPINO"<<endl;
        if((str[len-1]=='u' && str[len-2]=='s' && str[len-3]=='e' && str[len-4]=='d') || (str[len-1]=='u' && str[len-2]=='s' && str[len-3]=='a' && str[len-4]=='m'))
           cout<<"JAPANESE"<<endl;
        if(str[len-1]=='a' && str[len-2]=='d' && str[len-3]=='i' && str[len-4]=='n' && str[len-5]=='m')
            cout<<"KOREAN"<<endl;
   }
    return 0;
}
