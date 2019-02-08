#include<bits/stdc++.h>
using namespace std;
int main()
{
    char M[501][501];
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>M[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(M[i][j]=='X' && M[i-1][j-1]=='X' && M[i-1][j+1]=='X' && M[i+1][j-1]=='X' && M[i+1][j+1]=='X')
                cnt++;
            //cin>>M[i][j];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
