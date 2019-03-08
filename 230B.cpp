#include<bits/stdc++.h>
using namespace std;

bool prime(long long int n){
	for(long long int i=2; i*i<=n; i++){
		if(n%i==0)return false;
	}
return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

    long long int n,x,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        temp=sqrt(x);
        if(prime(temp) && (temp*temp)==x && x>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
