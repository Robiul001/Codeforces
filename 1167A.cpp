#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt;
        string str;
        cin>>n;
        cin>>str;
        cnt=n;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='8')
            {
                cnt=i;
                break;
            }
        }
        if((n-cnt)>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,cnt=0;
//        string str;
//        cin>>n;
//        cin>>str;
//        for(int i=0;i<n;i++)
//        {
//            if(str[i]=='8')
//                cnt++;
//            else if(cnt>0)
//                cnt++;
//        }
//        if(cnt>=11)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//
//    return 0;
//}
