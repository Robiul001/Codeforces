#include<bits/stdc++.h>
using namespace std;
int main()
{
    char cake[12][12];
    int row,col,cnt=0;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>cake[i][j];
        }
    }
    /// Check row
    for(int i=0;i<row;i++)
    {
        cnt=0;
        for(int j=0;j<col;j++)
        {
            if(cake[i][j]=='.' || cake[i][j]=='c')
                cnt++;
        }
        if(cnt==col)
        {
            for(int j=0;j<col;j++)
            {
                cake[i][j]='c';
            }
        }
    }
    /// Check column
    for(int i=0;i<col;i++)
    {
        cnt=0;
        for(int j=0;j<row;j++)
        {
            if(cake[j][i]=='.' || cake[j][i]=='c')
                cnt++;
        }
        if(cnt==row)
        {
            for(int j=0;j<row;j++)
            {
                cake[j][i]='c';
            }
        }
    }
    /// final count
    cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(cake[i][j]=='c')
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
