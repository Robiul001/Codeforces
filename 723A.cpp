#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[4],result;
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    result=(x[1]-x[0])+(x[2]-x[1]);
    cout<<result;
    return 0;
}
