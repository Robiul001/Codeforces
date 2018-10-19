#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3,stair,elevator;
    cin>>x>>y>>z>>t1>>t2>>t3;
    stair=abs(x-y)*t1;
    elevator=((abs(z-x)+abs(x-y))*t2)+(3*t3);
    if(elevator<=stair)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
