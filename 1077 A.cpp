#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b,k,acnt,bcnt;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            k/=2;
            acnt=a*k;
            bcnt=b*k;
        }
        else
        {
            k/=2;
            acnt=a*(k+1);
            bcnt=b*k;
        }
        cout<<acnt-bcnt<<endl;
    }
    return 0;
}
