#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k,l=0;
        cin>>n>>k;
        for(int i=0;i<n;i+=k)
        {
            for(int j=0;j<k && l<n;j++)
            {
                l++;
                char ch='a'+j;
                cout<<ch;
            }
        }
        cout<<endl;
    }
    return 0;
}
