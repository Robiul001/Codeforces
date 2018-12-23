#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char left[50],right[50],mid;
    cin>>str;
    if(str.size()%2==1)
    {
        int n=str.size()/2;
        mid=str[n];int j=0;
        for(int i=n-1;i>=0;i--){
            left[j]=str[i];
            j++;}
        int k=0;
        for(int i=n+1;i<str.size();i++){
            right[k]=str[i];
            k++;}
        cout<<mid;
        for(int i=0;i<j;i++)
            cout<<right[i]<<left[i];
    }
    else
    {
        int n=str.size()/2;
        int j=0;
        for(int i=n-1;i>=0;i--){
            left[j]=str[i];
            j++;}
        int k=0;
        for(int i=n;i<str.size();i++){
            right[k]=str[i];
            k++;}
        for(int i=0;i<j;i++)
            cout<<left[i]<<right[i];
    }
    return 0;
}
