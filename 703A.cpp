#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c,mcnt=0,ccnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m>>c;
		if(m<c)
		{
			ccnt++;
		}
		else if(m>c)
		{
			mcnt++;
		}
		else {}
	}

	if(ccnt==mcnt)
	{
		cout<<"Friendship is magic!^^";
	}
	else if(ccnt<mcnt)
	{
		cout<<"Mishka";
	}
	else
	{
		cout<<"Chris";
	}
	return 0;
}
