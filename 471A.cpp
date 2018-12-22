#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> st;
    int t=0,b=0,c=0,temp=0;
    int arr[7],a=0,arr2[11]={0};
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    if(st.size()>3)
    {
        cout<<"Alien"<<endl;
    }
    else
    {
        for(int i=0;i<6;i++)
        {
            arr2[arr[i]]++;
        }
//        for(int i=0;i<10;i++)
//        {
//            cout<<arr2[i]<<" ";
//        }
//        cout<<endl;
        for(int i=0;i<10;i++)
        {
            if(arr2[i]>=4)
            {
                a=i;
                temp=arr2[i];
            }
        }
        //cout<<a<<endl;
        for(int i=0;i<6;i++)
        {
            if(a!=arr[i] && t==0)
            {
                b=arr[i];
                t=1;
            }
            else if(a!=arr[i] && t==1)
            {
                c=arr[i];
                t=2;
            }
            else{}
        }
        //cout<<b<<" "<<c;
        if(a==0)
        {
            cout<<"Alien"<<endl;
        }
        else if(b<c || ( b!=c && st.size()==2) )
        {
            cout<<"Bear"<<endl;
        }
        else
        {
            cout<<"Elephant"<<endl;
        }
    }
    return 0;
}
