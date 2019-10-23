#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[15000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int chk=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            arr[i]=arr[i]/2;
        else
        {
            if(chk==0)
            {
                chk=1;
//                arr[i]=floor((double)arr[i]/2.0);
                arr[i]=ceil((double)arr[i]/2.0);
            }
            else
            {
                chk=0;
//                arr[i]=ceil((double)arr[i]/2.0);
                arr[i]=floor((double)arr[i]/2.0);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
