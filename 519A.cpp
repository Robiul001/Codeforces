#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[10];
    int cnt0=0,cnt1=0;
    for(int i=0;i<8;i++)
    {
        cin>>str[i];
    }

    for(int i=0;i<8;i++)
    {
        string str1=str[i];
        for(int j=0;j<8;j++)
        {
            if(isupper(str1[j]))
            {
                if(str1[j]=='B'||str1[j]=='N')
                {
                    cnt0+=3;
                }
                else if(str1[j]=='Q')
                {
                    cnt0+=9;
                }
                else if(str1[j]=='R')
                {
                    cnt0+=5;
                }
                else if(str1[j]=='P')
                {
                    cnt0++;
                }
                else{}
            }
            else
            {
                if(str1[j]=='b'||str1[j]=='n')
                {
                    cnt1+=3;
                }
                else if(str1[j]=='q')
                {
                    cnt1+=9;
                }
                else if(str1[j]=='r')
                {
                    cnt1+=5;
                }
                else if(str1[j]=='p')
                {
                    cnt1++;
                }
                else{}
            }
        }
        //cout<<str[i]<<endl;
    }
    if(cnt0==cnt1)
    {
        cout<<"Draw";
    }
    else if(cnt0<cnt1)
    {
        cout<<"Black";
    }
    else
    {
        cout<<"White";
    }
    //cout<<cnt0<<"  "<<cnt1;
    return 0;
}
