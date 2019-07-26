#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i<=20000;i++)
    {
        int j = i,k=i;
        int sum = 0;
        while(j!=0)
        {
            sum+=(j%10);
            j/=10;
        }
        if(sum%4==0)
        {
            cout<<k<<endl;
            return 0;
        }
    }
    return 0;
}
