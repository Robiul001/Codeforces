#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n,cnt=0,j=0;
        int pos1[10005],pos2[10005];
        string str1,str2;
        cin>>n;
        cin>>str1;
        cin>>str2;
        for(int i=0;i<n;i++)
        {
            if(str1[i]!=str2[i])
            {
                cnt++;
                pos1[j]=i;
                pos2[j]=i;
                j++;
            }
        }
//        cout<<pos1[0]<<" "<<pos1[1]<<endl;
//        cout<<pos2[0]<<" "<<pos2[1]<<endl;
        if(cnt==0 || (cnt==2 && (str1[pos1[0]]==str1[pos1[1]]) && (str2[pos2[1]]==str2[pos2[0]])))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
