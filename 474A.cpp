#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,arr2[102],arr[40]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    string str;
    int n,k=0;
    cin>>ch;
    cin>>str;
    n=str.size();
    if(ch=='R')
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<30;j++)
            {
                if(arr[j]==str[i])
                {
                    arr2[k]=arr[j-1];
                    k++;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<30;j++)
            {
                if(arr[j]==str[i])
                {
                    arr2[k]=arr[j+1];
                    k++;
                }
            }
        }
    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<30;j++)
//        {
//            if(arr[j]==str[i])
//            {
//                arr2[k]=arr[j-1];
//                k++;
//            }
//        }
//    }
    /// Output
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i];
    }
    return 0;
}
