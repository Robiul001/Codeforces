#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,cnt[26]={0};
    string str;
    cin>>k;
    cin>>str;
    n=str.size();

    for(int i=0;i<n;i++)
    {
        cnt[str[i]-'a']++;
    }

//    for(int i=0;i<26;i++)
//    {
//        cout<<cnt[i]<<" ";
//    }

    for(int i=0;i<26;i++)
    {
        if(cnt[i]%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<26;j++)
        {
            int tmp = cnt[j]/k;
//            cout<<tmp<<endl;
            while(tmp--)
            {
                cout<<char(j+'a');
            }
        }
    }
    return 0;
}
