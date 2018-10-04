#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;          /// total people =n
    cout<<min(n-a,b+1);    /// a  <-  i  ->  b ; so formula : minimum(n-a,b+1)
    return 0;
}
