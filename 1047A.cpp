#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,cnt;
    double ans;
    cin>>n;
    a=1;
    b=1;
    c=n-2;
    if(c%3==0)
    {
        c--;
        b++;
    }
    cout<<a<<" "<<b<<" "<<c;
//    ans=(double)n/3;
//    cnt=n/3;
//    if((double)cnt==ans)
//    {
//        if(cnt%3!=0)
//        {
//            cout<<cnt<<" "<<cnt<<" "<<cnt;
//        }
//        else
//        {
//            cout<<cnt-1<<" "<<cnt-1<<" "<<cnt+2;
//        }
//
//    }
//    else
//    {
//        a=cnt+(n-(cnt*3));
//
//        if(cnt%3!=0 && a%3!=0)
//        {
//            cout<<cnt<<" "<<cnt<<" "<<a;
//        }
//        else if(cnt%3==0 && a%3!=0)
//        {
//            cout<<cnt-1<<" "<<cnt+1<<" "<<a;
//        }
//        else if(cnt%3!=0 && a%3==0)
//        {
//            cout<<cnt<<" "<<cnt<<" "<<a-1;
//        }
//        else
//        {
//            cout<<cnt-1<<" "<<cnt-1<<" "<<cnt+a+2;
//        }
//
//    }
    return 0;
}
