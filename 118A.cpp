#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[101],c;
    int i,n;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++){
        c=tolower(ch[i]);
        if((c=='a')||(c=='o')||(c=='y')||(c=='e')||(c=='u')||(c=='i')){

        }else
        {
            cout<<"."<<c;
        }
    }
    return 0;
}
