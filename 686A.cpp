#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum,cnt=0;
    char ch;
    cin>>n>>x;
    sum=x;
    for(int i=0;i<n;i++)
    {
        cin>>ch>>x;
        if(ch=='+')
        {
            sum+=x;
        }
        else if(ch=='-' && x>sum)
        {
            cnt++;
        }
        else
        {
            sum-=x;
        }
    }
    cout<<sum<<" "<<cnt<<endl;
    return 0;
}
