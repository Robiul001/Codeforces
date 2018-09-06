#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5,sum,ans;
    float ans1;
    cin>>c1>>c2>>c3>>c4>>c5;
    sum=c1+c2+c3+c4+c5;
    ans1=(float)sum/5;
    ans=(int)ans1;
    if((c1==0) && (c2==0) && (c3==0) && (c4==0) && (c5==0))
    {
        cout<<"-1";
    }
    else if(ans==ans1)
    {
        cout<<ans;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
