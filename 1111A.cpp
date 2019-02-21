#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,ch1;
    string str,str1;
    cin>>str>>str1;
    int n=str.size();
    int n1=str1.size();
    if(n<n1)
    {
        for(int i=0;i<n;i++)
        {
            ch=tolower(str[i]);
            ch1=tolower(str1[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                {

                }
                else
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            else
            {
                if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<n1;i++)
        {
            ch=tolower(str[i]);
            ch1=tolower(str1[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                {

                }
                else
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            else
            {
                if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    if(n!=n1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}
