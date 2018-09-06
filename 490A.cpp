#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,k=0,l=0,cnt=0,cnt1=0,cnt2=0,cnt3=0;
    int arr[5002],arr1[5002],arr2[5002],arr3[5002];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            arr1[j]=i+1;
            j++;
        }
        else if(arr[i]==2)
        {
            arr2[k]=i+1;
            k++;
        }
        else
        {
            arr3[l]=i+1;
            l++;
        }
    }
    if(j==0 || k==0 || l==0)
    {
        cout<<0;
    }
    else
    {
        cnt=((j<k && j<l) ? j:(k<l ? k:l));
        cout<<cnt<<endl;
        for(int i=0;i<cnt;i++)
        {
            cout<<arr1[cnt1]<<" "<<arr2[cnt2]<<" "<<arr3[cnt3]<<endl;
            cnt1++;
            cnt2++;
            cnt3++;
        }
    }
    return 0;
}
