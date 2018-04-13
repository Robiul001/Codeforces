#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105],indexev,indexod,evencnt=0,oddcnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            evencnt++;
            indexev=i;
        }
        else
        {
            oddcnt++;
            indexod=i;
        }
    }
    if(evencnt==1)
    {
        cout<<indexev+1;
    }
    else
    {
        cout<<indexod+1;
    }
    return 0;
}
