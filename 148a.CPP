#include<bits/stdc++.h>
using namespace std;
//int gcd(int x,int y)
//{
//    if(x==0 || y==0)
//        return 0;
//    if(x==y)
//        return x;
//    if(x>y)
//        return gcd(x-y,x);
//    return gcd(x,y-x);
//}
int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    cnt=d;
    if(k==1 || l==1 || m==1 || n==1)
    {
        cout<<cnt;
    }
    else
    {
        for(int i=1;i<=d;i++)
        {
            if((i%k)!=0 && (i%l)!=0 && (i%m)!=0 && (i%n)!=0)
            {
                cnt--;
            }
        }
        cout<<cnt;
    }
    return 0;
}
