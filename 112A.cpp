#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[101],ch1[101];
    int i,n,n1,sum=0,sum1=0,c,c1;
    gets(ch);
    gets(ch1);
    n=strlen(ch);

    for(i=0;i<n;i++)
    {
        c=tolower(ch[i]);
        c1=tolower(ch1[i]);
       // sum=sum+(c-c1);
		sum+=c;
		sum1+=c1;
    }
//    if(sum==sum1)
//    {
//        cout<<"0"<<endl;
//    }
//    else if(sum<sum1)
//	{
//        cout<<"-1"<<endl;
//    }else
//	{
//        cout<<"1"<<endl;
//    }

    if(ch>ch1){
        cout<<"-1";
    }else if(ch==ch1){
        cout<<"0";
    }else
    {
        cout<<"1";
    }
    return 0;
}
