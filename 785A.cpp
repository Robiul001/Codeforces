#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int n,cnt=0;
 	string str;
 	cin>>n;
 		for(int i=1;i<=n;i++)
 		{
 			cin>>str;
 			if(str=="Tetrahedron")
 			{
 				cnt+=4;
 			}
 			else if(str=="Cube")
 			{
 				cnt+=6;
 			}
 			else if(str=="Octahedron")
 			{
 				cnt+=8;
 			}
 			else if(str=="Dodecahedron")
 			{
 				cnt+=12;
 			}
 			else
 			{
 				cnt+=20;
 			}
 			//cout<<2<<" ";
 		}
 		cout<<cnt;
 	return 0;
 }
