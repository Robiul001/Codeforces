#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt2=0,cnt5=0;
    vector<int> vec;
    vector <int> :: iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    it=vec.begin();
    k=*it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        if(k==50 || k==100)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            if(*it==25)
                cnt2++;
            else if(*it==50)
            {
                cnt2--;
                cnt5++;
                if(cnt2<0)
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
            {
                if(cnt5>0)
                {
                    cnt2--;
                    cnt5--;
                    if(cnt2<0)
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
                else
                {
                    cnt2-=3;
                    if(cnt2<0)
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"YES";
    return 0;
}
