#include<bits/stdc++.h>
using namespace std;

int arr1[35],arr2[35];

int main()
{
    int d,sumTime,cnt1=0,cnt2=0;
    cin>>d>>sumTime;
    for(int i=0;i<d;i++)
    {
        int minTime,maxTime;
        cin>>minTime>>maxTime;
        arr1[i]=minTime;
        arr2[i]=maxTime;
        cnt1+=minTime;
        cnt2+=maxTime;
    }
    if(sumTime<cnt1 || sumTime>cnt2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<d;i++)
    {
        int tmp = min(arr2[i],sumTime-cnt1+arr1[i]);
        cout<<tmp<<" ";
        sumTime-=tmp;
        cnt1-=arr1[i];
    }
    return 0;
}
