#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,hour,minute,cnt=1,cnt2,cnt3;
    vector <int> vec;
    vector <int> :: iterator it;
    cin>>n;
    cin>>hour>>minute;
    cnt2=(hour*60)+minute;
    for(int i=1;i<n;i++)
    {
        cin>>hour>>minute;
        cnt3=(hour*60)+minute;
        if(cnt2==cnt3)
        {
            cnt++;
        }
        else
        {
            vec.push_back(cnt);
            cnt=1;
            cnt2=cnt3;
        }
    }
    vec.push_back(cnt);
    sort(vec.begin(),vec.end());
    it=vec.end()-1;
    cout<<*it;
    return 0;
}
