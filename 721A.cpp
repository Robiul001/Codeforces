#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int> :: iterator it;
    int n,i=0,sum=0;
    string str;
    cin>>n>>str;
    while(i<n)
    {
        if(str[i]=='B' && str[i+1]=='B')
        {
            sum++;
        }
        else if(str[i]=='B' && (str[i+1]!='B' || str[i+1]=='\0'))
        {
            sum++;
            vec.push_back(sum);
            sum=0;
        }
        else{}
        i++;
    }
    cout<<vec.size()<<endl;
    if(vec.size()>0)
    {
        for(it=vec.begin();it!=vec.end();it++)
            cout<<*it<<" ";
    }
    return 0;
}
