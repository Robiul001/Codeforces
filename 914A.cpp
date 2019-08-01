#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int n,tmp;
    cin>>n;
    while(n--)
    {
        cin>>tmp;
        if(tmp<0)
            vec.push_back(tmp);
        else
        {
            int sqr = sqrt(tmp);
            if(sqr*sqr != tmp)
            vec.push_back(tmp);
        }
    }
    sort(vec.begin(),vec.end());
    it = vec.end()-1;
    cout<<*it<<endl;
    return 0;
}
