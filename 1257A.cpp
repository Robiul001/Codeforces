#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b,tmp;
        cin>>n>>x>>a>>b;
        if(a>b)
            swap(a,b);
        for(int i=a;i>1 && x!=0;i--)
        {
            x--;
            a--;
        }
        for(int i=b;i<n && x!=0;i++)
        {
            x--;
            b++;
        }

//        if(a>1 && x>0)
//        {
//            tmp = max(1,a-x);
//            a=tmp;
//            x-=tmp;
//        }
//        if(b<n && x>0)
//        {
//            tmp = min(n,b+x);
//            b=tmp;
//            x-=tmp;
//        }
        cout<<b-a<<endl;
    }
    return 0;
}
