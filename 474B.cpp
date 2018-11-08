#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,b,ans,a[100005],ele;
    vector<lli> vec;
    vector<lli> :: iterator it;;
    cin>>n;
    for(lli i=0;i<n;i++)
        cin>>a[i];
//    cin>>b;
//    for(lli i=0;i<b;i++)
//        cin>>m[i];
    vec.push_back(a[0]);
    for(lli i=1;i<n;i++)
    {
        a[i]+=a[i-1];
        vec.push_back(a[i]);
    }
    cin>>b;
    for(lli i=0;i<b;i++){
        cin>>ele;
        ans=lower_bound(vec.begin(),vec.end(),ele)-vec.begin();
        cout<<ans+1<<endl;
    }
//        cin>>m[i];
//    for(lli i=0;i<b;i++)
//    {
//        for(lli j=0;j<n;j++)
//        {
//            if(a[j]>=m[i])
//            {
//                cout<<j+1<<endl;
//                break;
//            }
//        }
//    }

//    for(lli j=0;j<b;j++)
//    {
//        sum=0;
//        lli i=0;
//        while(sum<m[j])
//        {
//            sum+=a[i];
//            i++;
//        }
//        cout<<i<<endl;
//    }
    return 0;
}
