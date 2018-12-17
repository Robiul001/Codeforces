#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1002],sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0,j=n-1,m=0;
    while(n!=m)
    {
        if(arr[i]>=arr[j])
        {
            if(m%2==0)
            {
                sum1+=arr[i];
            }
            else
            {
                sum2+=arr[i];
            }
            i++;
        }
        else
        {
            if(m%2==0)
            {
                sum1+=arr[j];
            }
            else
            {
                sum2+=arr[j];
            }
            j--;
        }
        m++;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
