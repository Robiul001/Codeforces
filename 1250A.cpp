#include<bits/stdc++.h>
using namespace std;

int mx[400005];
int mn[400005];
int arr[400005];
int arr2[400005];

int main()
{
    //freopen("in.txt","r",stdin);
    int n,m,tmp1,tmp2,tmp3,tmp4,a;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        arr[i] = i;
        arr2[i] = i;
        mx[i] = i;
        mn[i] = i;
    }
    for(int i=1;i<=m;i++)
    {
        int tmp;
        cin>>tmp;
        if(arr2[tmp]!=1)
        {
            swap(arr[arr2[tmp]],arr[arr2[tmp]-1]);
            tmp3 = arr[arr2[tmp]];
            tmp4 = arr[arr2[tmp]-1];
            tmp1 = arr2[tmp];
            tmp2 = arr2[tmp]-1;
            arr2[tmp3] = tmp1;
            arr2[tmp4] = tmp2;

            //cout<<tmp<<" "<<arr2[tmp]<<" "<<arr[tmp1]<<" "<<tmp1<<endl;
            a = arr[tmp1];

            mn[tmp] = min(mn[tmp],arr2[tmp]);
            mx[tmp] = max(mx[tmp],arr2[tmp]);
            mn[a] = min(mn[a],tmp1);
            mx[a] = max(mx[a],tmp1);
        }
//        for(int i=1;i<=n;i++)
//            cout<<arr[i]<<" ";
//        cout<<endl;
    }

    for(int i=1;i<=n;i++)
        cout<<mn[i]<<" "<<mx[i]<<endl;
    return 0;
}
