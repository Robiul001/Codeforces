#include<bits/stdc++.h>
using namespace std;

int arr[100005];
int chk[1000005];
int ans[1000005];
int cnt=0;
vector<int>vec;
vector<int>::iterator it;

set<int>st;
set<int>:: iterator it1;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int robi,karim;
    for(int i=1;i<=n;i++)
    {
        robi = st.size();
        st.insert(arr[i]);
        karim = st.size();
        int tmp = abs(arr[i]);
        if(robi == karim || (arr[i]>0 && chk[tmp]==1) ||(arr[i]<0 && chk[tmp]==0) || (arr[i]<0 && chk[tmp]==1 && cnt==0))
        {
            cout<<-1<<endl;
            return 0;
        }
        if(arr[i]<0 && chk[tmp]==1)
        {
            cnt+= arr[i];
            chk[tmp]=0;
        }
        else
        {
            cnt+= arr[i];
            chk[tmp]=1;
        }
        if(cnt==0)
        {
            vec.push_back(i);
            st.clear();
        }
    }
    int a = vec.size();
    if(a==0 || cnt!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    ans[0]=vec[0];
    for(int i=1;i<a;i++)
    {
        ans[i]=vec[i]-vec[i-1];
    }
    cout<<a<<endl;
    for(int i=0;i<a;i++)
        cout<<ans[i]<<" ";
    return 0;
}
