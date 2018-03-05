#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i,threecnt=0,twocnt=0,onecnt=0;
    cin>>str;
    n=str.size();
    for(i=0;i<n;i=i+2){
        if(str[i]=='1'){
            onecnt++;
        }else if(str[i]=='2'){
            twocnt++;
        }else{
            threecnt++;
        }
    }
    for(i=1;i<=onecnt;i++){
        if(i==onecnt&&twocnt==0&&threecnt==0){
            cout<<"1";
        }else{
            cout<<"1+";
        }
    }
    for(i=1;i<=twocnt;i++){
        if(i==twocnt&&threecnt==0){
            cout<<"2";
        }else{
            cout<<"2+";
        }
    }
    for(i=1;i<=threecnt;i++){
        if(i==threecnt){
            cout<<"3";
        }else{
            cout<<"3+";
        }
    }
    return 0;
}
