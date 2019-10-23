#include<bits/stdc++.h>
using namespace std;

vector<int>vec[305];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            int k = (n*(i-1))+1;
            for(int j=1;j<=n;j++)
            {
                vec[j].push_back(k);
                k++;
            }
        }
        else
        {
            int k = n*i;
            for(int j=1;j<=n;j++)
            {
                vec[j].push_back(k);
                k--;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
