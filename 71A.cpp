#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,n,k,l;
    char ch[101];
    cin>>testcase;
    gets(ch);
    cout<<endl;
    for(int i=0;i<testcase;i++){
        gets(ch);
        n=strlen(ch);
        if(n<=10){
            puts(ch);
            cout<<endl;
        }else{
            k=n-2;
            cout<<ch[0]<<n-2<<ch[n-1]<<endl;
           // cout<<i<<endl;
        }
    }
    return 0;
}
