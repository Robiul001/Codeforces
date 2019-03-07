#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,total,ans;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    total=((h2-h1)*60) + (m2-m1);
    if(total<60)
    {
        //cout<<"Robi"<<endl;
        ans=total/2;
        if(m1+ans>=60)
        {
            h1++;
            m1=(m1+ans)-60;
        }
        else
        {
            m1=(m1+ans);
        }
        if(h1<10 && m1<10)
        {
            cout<<0<<h1<<":"<<0<<m1<<endl;
        }
        else if(h1<10 && m1>=10)
        {
            cout<<0<<h1<<":"<<m1<<endl;
        }
        else if(h1>=10 && m1<10)
        {
            cout<<h1<<":"<<0<<m1<<endl;
        }
        else
        {
            cout<<h1<<":"<<m1<<endl;
        }
    }
    else
    {
        total/=2;
        ans=total/60;
        total%=60;
        if(m1+total>=60)
        {
            h1++;
            m1=(m1+total)-60;
        }
        else
        {
            m1=(m1+total);
        }

        if(h1+ans<10 && m1<10)
        {
            cout<<0<<h1+ans<<":"<<0<<m1<<endl;
        }
        else if(h1+ans<10 && m1>=10)
        {
            cout<<0<<h1+ans<<":"<<m1<<endl;
        }
        else if(h1+ans>=10 && m1<10)
        {
            cout<<h1+ans<<":"<<0<<m1<<endl;
        }
        else
            cout<<h1+ans<<":"<<m1<<endl;
    }
    return 0;
}

