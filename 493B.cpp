#include<bits/stdc++.h>
using namespace std;

vector<int>vec[2];

int main()
{
    long long int n,a,cnt=0,last;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>=0)
            vec[0].push_back(a);
        else
            vec[1].push_back(abs(a));
        cnt+=a;
        last=a;
    }
    if(cnt>0 || (cnt==0 && vec[0]>vec[1]) || (cnt==0 && vec[0]==vec[1] && last>0))
        cout<<"first"<<endl;
    else
        cout<<"second"<<endl;
    return 0;
}
