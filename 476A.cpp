#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	float k;
	cin>>n>>m;
	if(n<m)
	{
		cout<<-1;
	}
	else
	{
		k=ceil(float(n)/2);
	for(int i=k;i<=n;i++)
	{
		if(i%m==0)
		{
			cout<<i;
			return 0;
		}
	}
	}
	return 0;
}
