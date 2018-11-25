#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,red,green,blue;
    double r,g,b;
    cin>>n>>k;
    red=n*2;
    green=n*5;
    blue=n*8;
    r=ceil((double)red/(double)k);
    g=ceil((double)green/(double)k);
    b=ceil((double)blue/(double)k);
    cout<<(int)(r+g+b);
    return 0;
}
