#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string str[3001],str1[3001],str2[3001];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>str1[i]>>str2[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((str[i]==str1[j]) || (str[i]==str2[j]))
            {
                if((str1[j].size())<=(str2[j].size()))
                {
                    str[i]=str1[j];
                }
                else
                {
                    str[i]=str2[j];
                }
            }
        }

    }

    //cout<<endl;
//    for(int i=0;i<m;i++)
//    {
//        cout<<str1[i]<<" "<<str2[i];
//        cout<<endl;
//    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" ";
    }
//    cin>>str[0]>>str1[0];
//    cout<<str[0]<<str1[0];
    return 0;
}
