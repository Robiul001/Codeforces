#include<bits/stdc++.h>
using namespace std;
int main()
{
//    //while(1){
//    int n,m,a,b,cnt=0;
//    cin>>n>>m>>a>>b;
//    if(n>=b && m>a)
//    {
//        cnt=b;
//    }
//    else if(m==a && (m*a)<=b)
//    {
//        cnt=n*a;
//    }
//    else
//    {
//        //cout<<"Robiul"<<endl;
//        while(n>0)
//        {
//            if(n/m>=1)
//            {
//                cnt+=(n/m)*b;
//                n-=(n/m)*m;
//               // cout<<"Robi"<<cnt<<endl;
//            }
//            else
//            {
//                if(a<b)
//                {
//                    //cout<<"Rob"<<endl;
//                    cnt+=a;
//                    n--;
//                }
//                else
//                {
//                    //cout<<"Ro"<<endl;
//                    cnt+=b;
//                    n-=m;
//                }
//            }
//        }
//    }
//    cout<<cnt;
//   // }



    int n,m,a,b,cnt,cnt1;
    cin>>n>>m>>a>>b;
    if((a*m)<=b)
    {
        cnt=n*a;
    }
    else
    {
        cnt=(n/m)*b+b;
        cnt1=(n/m)*b+(n%m)*a;
        if(cnt>cnt1)
        {
            cnt=cnt1;
        }
    }

    cout<<cnt;
    return 0;
}
