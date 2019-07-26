#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int , int> mp;
    map <int , int> :: iterator it1;
    int tmp,q,n,k,chk;
    long long sum=0;
    cin>>q;
    while(q--)
    {
        chk=0;
        sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            sum+=tmp;
            if(tmp%2==1)
            {
                chk++;
                mp.insert(pair<int,int>(i+1,tmp));
            }
        }

        it1  = mp.begin();
        if(((sum%2==1) && (k%2==1)&&(chk>=k)) || ((chk>=k) && (sum%2==0) && (k%2==0)))
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)
            {
                cout<<it1->first<<" ";
                it1++;
            }
            cout<<n<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        mp.clear();
    }
    return 0;
}

