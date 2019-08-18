#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> A;
    vector <int> :: iterator it;
    vector <int> B;
    vector <int> :: iterator it1;
    int n,m,tmp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        A.push_back(tmp);
    }

    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>tmp;
        B.push_back(tmp);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tmp = A[i]+B[j];
            //cout<<tmp<<endl;
            it = find(A.begin(),A.end(),tmp);
            it1 = find(B.begin(),B.end(),tmp);
            if(it==A.end() && it1==B.end())
            {
                cout<<A[i]<<" "<<B[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
