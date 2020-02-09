/**==============================================*\
ID     : Robiul001
Name   : Robiul Islam
Study  : CSE,DUET
Address: Gazipur, Bangladesh

Email  : robiulcse001@gmail.com
===============================================**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,nn,arr[200005],first1[100005],second1[100005],j=0,k=0,first=0,second=0;
        cin>>n;
//        vector<int>vec1;
//        vector<int>vec2;
//        vector<int>::iterator it;
        for(int i=0;i<(n+n);i++)
            cin>>arr[i];
        sort(arr,arr+(n+n));
        long long ans = abs(arr[n]-arr[n-1]);
        cout<<ans<<endl;
        /*nn=2*n;
        for(int i=0;i<(n+n);i+=2)
        {
            if(first>second)
            {
                vec1.push_back(arr[i]);
                vec2.push_back(arr[i+1]);
                first+=arr[i];
                second+=arr[i+1];
            }
            else
            {
                first+=arr[i+1];
                second+=arr[i];
                vec1.push_back(arr[i+1]);
                vec2.push_back(arr[i]);
            }
//            cout<<first<<" "<<second<<endl;
        }
        int sz=n/2;
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
//        cout<<vec1[sz]<<" "<<vec2[sz]<<endl;
        cout<<abs(vec1[sz]-vec2[sz])<<endl;
//        for(it=vec1.begin();it!=vec1.end();it++)
//            cout<<*it<<" ";
//        cout<<endl;
//        for(it=vec2.begin();it!=vec2.end();it++)
//            cout<<*it<<" ";
//        cout<<endl;*/
    }
    return 0;
}

