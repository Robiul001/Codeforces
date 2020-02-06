#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,a,b,k,total;
    cin>>n>>a>>b>>k;
    total = a+b;
    for(int i=0;i<n;i++)
    {
        int hp;
        cin>>hp;
        hp = hp%total;
        if(hp!=0)
            hp = hp-a;
        else
            hp = hp+b;
        if(hp<0)
            hp =0;
        int tmp1,tmp2;
        tmp1 = hp/a;
        tmp2 = hp%a;
        if(tmp2>0)
            tmp2 = 1;
        else
            tmp2 = 0;
        vec.push_back(tmp1+tmp2);
    }
    sort(vec.begin(),vec.end());
    int sum = 0,cnt=0;
    for(int i=0;i<vec.size();i++)
    {
        if(sum+vec[i]<=k)
        {
            sum+=vec[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
