#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cnt=0;
    cin>>a>>b>>c;
    while((a+b)<=c || (a+c)<=b || (b+c)<=a)
    {
        if((a<b) && (a<c))
        {
            a++;
            cnt++;
        }
        else
        {
            if(b<c)
            {
                b++;
                cnt++;
            }
            else
            {
                c++;
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
