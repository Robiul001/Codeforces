#include<bits/stdc++.h>
using namespace std;

char arr[13][13];

int main()
{
    int n,m,cnt=0;
    memset(arr,'.',sizeof(arr));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='P')
            {
                if(arr[i][j-1]=='W')
                {
                    cnt++;
                    arr[i][j-1]='.';
                    arr[i][j]='.';
                }
                else if(arr[i-1][j]=='W')
                {
                    cnt++;
                    arr[i-1][j]='.';
                    arr[i][j]='.';
                }
                else if(arr[i][j+1]=='W')
                {
                    cnt++;
                    arr[i][j+1]='.';
                    arr[i][j]='.';
                }
                else if(arr[i+1][j]=='W')
                {
                    cnt++;
                    arr[i+1][j]='.';
                    arr[i][j]='.';
                }
                else
                {

                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
