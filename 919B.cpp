#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,ans=0,n=10,m,n1,j=0,arr[10002];
    while(1)
    {
        ans=0;
        n+=9;
        n1=n;
        while(n1!=0)
        {
            ans+=(n1%10);
            n1/=10;
        }
        if(ans==10)
        {
            //cout<<n<<endl;
            arr[i]=n;
            i++;
        }
        if(i>10001)
            break;
        //cout<<i<<" "<<arr[2]<<endl;
    }
    cin>>m;
    cout<<arr[m-1]<<endl;
    return 0;
}
