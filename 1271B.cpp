#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int> :: iterator it;
    int n,black=0,white=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
            black++;
        else
            white++;
    }
    if(black%2==1 && white%2==1)
        cout<<-1<<endl;
    else
    {
        if(black%2==0)
        {
            for(int i=0;i<n-1;i++)
            {
                if(str[i]=='B')
                {
                    vec.push_back(i+1);
                    if(str[i]=='B')
                        str[i]='W';
                    else
                        str[i]='B';
                    ///
                    if(str[i+1]=='W')
                        str[i+1]='B';
                    else
                        str[i+1]='W';
                }
            }
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(str[i]=='W')
                {
                    vec.push_back(i+1);
                    if(str[i]=='B')
                        str[i]='W';
                    else
                        str[i]='B';
                    ///
                    if(str[i+1]=='W')
                        str[i+1]='B';
                    else
                        str[i+1]='W';
                }
            }
        }
        cout<<vec.size()<<endl;
        for(it =vec.begin();it!=vec.end();it++)
            cout<<*it<<" ";
    }
    return 0;
}
