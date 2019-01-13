#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,n,k,cnte1=0,cnts1=0,ans=-1,cnte=0,cnts=0,a,arr[105];
    cin>>n>>k;
    int i=n;
    for(int l=0;l<n;l++)
    {
        cin>>a;
        arr[l]=a;
        if(a==1)
        {
            cnts1++;
        }
        else
        {
            cnte1++;
        }

    }
    for(int b=1;b<=n;b++){
        cnts=cnts1;
        cnte=cnte1;
    for(int j=-i;j<=i;j++)
    {
        int c=b+(j*k);
        if(c>=1 && c<=n)
        {
            if(arr[c-1]==1)
            {
                cnts--;
            }
            else
            {
                cnte--;
            }
        }
    }
    ans=max(ans,abs(cnts-cnte));
    }
    cout<<ans<<endl;
    return 0;
}
