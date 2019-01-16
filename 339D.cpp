#include<bits/stdc++.h>
using namespace std;

int arr[200000],tree[800000];

void build(int at, int L,int R,int job)
{
    if(L==R)
    {
        tree[at]=arr[L];
        return;
    }
    int mid=(L+R)/2;

    build(at*2,L,mid,1-job);
    build(at*2+1,mid+1,R,1-job);

    if(job)
        tree[at]=tree[at*2]^tree[at*2+1];
    else
        tree[at]=tree[at*2]|tree[at*2+1];

}


void update(int at,int L, int R, int pos,int valu, int job)
{
    if(pos<L || R<pos) return;
    if(L==R) {tree[at]=valu; return;}

    int mid=(L+R)/2;
    update(at*2,L,mid,pos,valu,1-job);
    update(at*2+1,mid+1,R,pos,valu,1-job);

    if(job)
        tree[at]=tree[at*2]^tree[at*2+1];
    else
        tree[at]=tree[at*2]|tree[at*2+1];

}

int main()
{
    int n,i,j,m;
    cin>>n>>m;
    int len=pow(2,n);
    for(i=1;i<=len;i++)
        cin>>arr[i];
    build(1,1,len,n%2==0);
    while(m--)
    {
        int indx,valu;
        cin>>indx>>valu;
        update(1,1,len,indx,valu,n%2==0);
        cout<<tree[1]<<endl;


    }

    return 0;
}
