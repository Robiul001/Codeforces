#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=1,g=0,l=1;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    for(i=0;i<n-1;i++){
        if(a[i]<=a[i+1])
        {
            cnt++;
            l=max(l,cnt);
        }
        else
            cnt=1;
    }
//    sort(b,b+g);
//    printf("%d\n",b[g-1]);
    cout<<l;
    return 0;
}
