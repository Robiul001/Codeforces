#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(((a+b)>c && (a+c)>b && (c+b)>a) || ((a+b)>d && (a+d)>b && (d+b)>a))
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(((a+d)>c && (a+c)>d && (c+d)>a) || ((c+b)>d && (c+d)>b && (d+b)>c))
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if((a+b==c) || (a+b==d) || (a+c==d) || (a+c==b) || (c+d==b) || (c+d==a) || (a+d==b) || (a+d==c) || (b+c==a) || (b+c==d) || (b+d==a) || (b+d==c) || (c+d==a) || (c+d==b))
    {
        cout<<"SEGMENT";
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
