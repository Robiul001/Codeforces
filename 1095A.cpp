#include<iostream>
using namespace std;
int main()
{
    int n,tmp=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i];
        i+=tmp;
        tmp++;
    }
    return 0;
}
