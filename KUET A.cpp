#include<bits/stdc++.h>
using namespace std;

int arrA[100005],arrB[100005];

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int j,n,cnt=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arrA[i];
        for(int i=0;i<n;i++)
            cin>>arrB[i];
        j=n-1;
        for(int i=0;i<n;i++)
        {
            if(arrA[i]==arrB[j])
                cnt++;
            j--;
        }
        if(n==cnt)
            cout<<"Case "<<i<<": POSSIBLE"<<endl;
        else
            cout<<"Case "<<i<<": IMPOSSIBLE"<<endl;
    }
    return 0;
}
