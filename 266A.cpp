#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,cnt=0;
    char ch[51],c[1];
    cin>>n;
    gets(c);
    gets(ch);
    a=strlen(ch);
    for(i=0;i<n-1;i++){
        if(ch[i]==ch[i+1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
