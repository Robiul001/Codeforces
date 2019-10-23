#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        while(true)
        {
            int chk = 1;
            int current = n;
            while(current>0)
            {
                if(chk==1 && current%3==2)
                    chk=0;
                current/=3;
            }
            if(chk==1)
                break;
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
