#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,cnt=0,result;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cnt+=(a/100);
    }
    result=(cnt/n)*100;
    cout<<result;
    return 0;
}
