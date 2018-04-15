#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,cnt=0,arrx[302];
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>arrx[i];
    }
    cin>>y;
    for(int i=x;i<x+y;i++)
    {
        cin>>arrx[i];
    }
    sort(arrx,arrx+(x+y));
//    for(int i=0;i<x+y;i++)
//    {
//        cout<<arrx[i]<<" ";
//    }
//    cout<<endl;
    for(int i=0;i<x+y;i++)
    {
        if(arrx[i]!=arrx[i+1])
            cnt++;
    //    for(int j=0;j<x+y;j++)
    //    {
    //        if(i==arrx[j])
    //        {
    //            break;
    //        }
    //    }
    }
    if(n==cnt)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    //cout<<endl<<cnt;
    return 0;
}
