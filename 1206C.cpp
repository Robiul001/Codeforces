#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec1;
    vector <int> :: iterator it;
    vector <int> vec2;
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        if(2*n>=4)
        {
            int i;
            for(i=1;i<=2*n;i=i+4)
            {
                if(i+4<=(2*n))
                {
                    vec1.push_back(i);
                    vec1.push_back(i+3);
                    vec2.push_back(i+1);
                    vec2.push_back(i+2);
                }
            }
//            cout<<i<<endl;
            if((2*n) %4 !=0)
            {
                vec1.push_back(i-4);
                vec2.push_back(i-3);
            }
            for(it = vec1.begin();it!=vec1.end();it++)
                cout<<*it<<" ";
            for(it = vec2.begin();it!=vec2.end();it++)
                cout<<*it<<" ";
        }
        else
        {
            cout<<1<<" "<<2<<endl;
        }
    }
    return 0;
}
