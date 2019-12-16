#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        vector<int>vec;
        vector<int>::iterator it;
        cin>>str;
        n=str.size();
        for(int i=0;i<n-4;i++)
        {
            if(str[i]=='t' && str[i+1]=='w' && str[i+2]=='o' && str[i+3]=='n' && str[i+4]=='e')
            {
                vec.push_back(i+3);
                str[i+2]='a';
            }
        }
        for(int i=0;i<n-2;i++)
        {
            if(str[i]=='o' && str[i+1]=='n' && str[i+2]=='e')
            {
                vec.push_back(i+2);
                str[i+1]='a';
            }
        }
        for(int i=0;i<n-2;i++)
        {
            if(str[i]=='t' && str[i+1]=='w' && str[i+2]=='o')
                vec.push_back(i+2);
        }
        cout<<vec.size()<<endl;
        for(it=vec.begin();it!=vec.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
