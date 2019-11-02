#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans[100005];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        double sum=0,tmp;
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&ans[i]);
            sum+=ans[i];
        }
        for(int i=0;i<n;i++)
        {
            tmp=ans[i]/sum;
            ans[i]+=(k*tmp);
            printf("%lf ",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
