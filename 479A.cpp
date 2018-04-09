#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans,ans1,ans2,ans3,ans4,ans5,re1,re2;
    cin>>a>>b>>c;
    ans=a+(b*c);
    ans1=a*(b+c);
    ans2=(a+b)*c;
    ans3=(a*b)+c;
    ans4=a*b*c;
    ans5=a+b+c;
    re1=(ans>ans1 && ans>ans2)?ans:(ans1>ans2)?ans1:ans2;
    re2=(re1>ans3 && re1>ans4)?re1:(ans3>ans4)?ans3:ans4;
    if(re2>ans5)
        cout<<re2;
    else
        cout<<ans5;
    return 0;
}
