#include<bits/stdc++.h>
using namespace std;

pair <int,int> card[1005];

int main()
{
    int n,total=0,play,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        card[i] = make_pair(b,a);
        total+=b;
    }
    play = min(total+1,n);
    sort(card,card+n);
    for(int i=n-1;i>=0 && play;i--,play--)
    {
        sum+=card[i].second;
    }
    cout<<sum<<endl;
    return 0;
}
