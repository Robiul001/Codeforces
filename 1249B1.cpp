#include<bits/stdc++.h>
using namespace std;

int arr[205],arr2[205],n,cnt[205]={0},p[205];

int main()
{
    int q,chk=1;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>p[i];
            arr[i]=i;
            arr2[p[i]]=arr[i];
        }
        memset(cnt,0,sizeof(cnt));
        while(chk==1){
            for(int i=1;i<=n;i++)
            {
                if(arr[i]!=i)
                {
                    int tmp = p[i];
                    arr2[tmp]=arr[i];
                    cnt[i]++;
                }
            }
            for(int i=1;i<=n;i++)
            {
                arr[i]=arr2[i];
            }
            int k,chk=0;
            for(k=1;k<=n;k++)
            {
                if(k!=arr[k])
                {
                    chk=1;
                }
            }
            if(chk==0)
                break;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<cnt[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
