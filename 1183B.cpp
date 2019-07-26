#include<bits/stdc++.h>
using namespace std;

long long int arr[105];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        int tmp = arr[0]+k;
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==tmp)
                index=i;
        }
        int chk =0;
        for(int i=index;i<n;i++)
        {
            if(abs(arr[i]-tmp)>k)
            {
                chk =1;
                cout<<-1<<endl;
                break;
            }
        }
        if(chk==0)
            cout<<tmp<<endl;
    }
    return 0;
}

