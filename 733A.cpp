#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=1;
    string str;
    vector <int> vec;
    vector <int> :: iterator it;
    cin>>str;
    for(int i=0;i<=str.size();i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || i==str.size())
        {
            vec.push_back(cnt);
            cnt=1;
        }
        else
        {
            cnt++;
        }
    }
    if(str.size()==1)
    {
        it=vec.end();
        it--;
        cout<<*it;
        return 0;
    }
    sort(vec.begin(),vec.end());
    it=vec.end();
    it--;
    cout<<*it;
    return 0;
}
