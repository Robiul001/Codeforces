#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,day=1;
    int week[8];
    cin>>n;
    for(int i=1;i<=7;i++)
        cin>>week[i];
    while(n>0)
    {
        n-=week[day];
        day++;
        if(day==8)
            day=1;
    }
    if(day==1)
        cout<<7<<endl;
    else
        cout<<day-1<<endl;
    return 0;
}
