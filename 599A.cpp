#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long  int a,b,c,cnt2,cnt1,cnt3,cnt4,cnt;
    cin>>a>>b>>c;
    cnt1=a+a+b+b;
    cnt2=a+b+c;
    cnt3=a+a+c+c;
    cnt4=b+b+c+c;
    cnt=min(min(cnt1,cnt2),min(cnt3,cnt4));
    cout<<cnt;
    /*
    if(cnt1<cnt2)
    {
    	cout<<cnt1;
    }
    else
    {
    	cout<<cnt2;
    }*/
	return 0;
}
