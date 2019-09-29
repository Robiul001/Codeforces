#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,O=0,N=0,E=0,Z=0,R=0,mn1=INT_MAX,mn0=INT_MAX;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='o')
            O++;
        else if(str[i]=='n')
            N++;
        else if(str[i]=='e')
            E++;
        else if(str[i]=='z')
            Z++;
        else
            R++;
    }
    mn1 = min(O,min(N,min(mn1,E)));
    O -= mn1;
    E -= mn1;
    if(O<0)
        O=0;
    if(E<0)
        E=0;
    mn0 = min(Z,min(E,min(R,min(O,mn0))));

    for(int i=1;i<=mn1;i++)
        cout<<1<<" ";
    for(int i=1;i<=mn0;i++)
        cout<<0<<" ";

    //cout<<mn1<<" "<<mn0<<endl;
    return 0;
}
