#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len,cnta[30]={0},cnt=0;
    string str;
    cin>>n;
    cin>>str;
    //len=str.size();
    for(int i=0;i<n;i++)
    {
        char ch=tolower(str[i]);
        if(ch=='a' && cnta[0]==0)
        {
            cnt++;
            cnta[0]=1;
        }
        else if(ch=='b' && cnta[1]==0)
        {
            cnt++;
            cnta[1]=1;
        }
        else if(ch=='c' && cnta[2]==0)
        {
            cnt++;
            cnta[2]=1;
        }
        else if(ch=='d' && cnta[3]==0)
        {
            cnt++;
            cnta[3]=1;
        }
        else if(ch=='e' && cnta[4]==0)
        {
            cnt++;
            cnta[4]=1;
        }
        else if(ch=='f' && cnta[5]==0)
        {
            cnt++;
            cnta[5]=1;
        }
        else if(ch=='g' && cnta[6]==0)
        {
            cnt++;
            cnta[6]=1;
        }
        else if(ch=='h' && cnta[7]==0)
        {
            cnt++;
            cnta[7]=1;
        }
        else if(ch=='i' && cnta[8]==0)
        {
            cnt++;
            cnta[8]=1;
        }
        else if(ch=='j' && cnta[9]==0)
        {
            cnt++;
            cnta[9]=1;
        }
        else if(ch=='k' && cnta[10]==0)
        {
            cnt++;
            cnta[10]=1;
        }
        else if(ch=='l' && cnta[11]==0)
        {
            cnt++;
            cnta[11]=1;
        }
        else if(ch=='m' && cnta[12]==0)
        {
            cnt++;
            cnta[12]=1;
        }
        else if(ch=='n' && cnta[13]==0)
        {
            cnt++;
            cnta[13]=1;
        }
        else if(ch=='o' && cnta[14]==0)
        {
            cnt++;
            cnta[14]=1;
        }
        else if(ch=='p' && cnta[15]==0)
        {
            cnt++;
            cnta[15]=1;
        }
        else if(ch=='q' && cnta[16]==0)
        {
            cnt++;
            cnta[16]=1;
        }
        else if(ch=='r' && cnta[17]==0)
        {
            cnt++;
            cnta[17]=1;
        }
        else if(ch=='s' && cnta[18]==0)
        {
            cnt++;
            cnta[18]=1;
        }
        else if(ch=='t' && cnta[19]==0)
        {
            cnt++;
            cnta[19]=1;
        }
        else if(ch=='u' && cnta[20]==0)
        {
            cnt++;
            cnta[20]=1;
        }
        else if(ch=='v' && cnta[21]==0)
        {
            cnt++;
            cnta[21]=1;
        }
        else if(ch=='w' && cnta[22]==0)
        {
            cnt++;
            cnta[22]=1;
        }
        else if(ch=='x' && cnta[23]==0)
        {
            cnt++;
            cnta[23]=1;
        }
        else if(ch=='y' && cnta[24]==0)
        {
            cnt++;
            cnta[24]=1;
        }
        else if(ch=='z' && cnta[25]==0)
        {
            cnt++;
            cnta[25]=1;
        }
        else{}
    //cout<<ch<<"\t"<<cnt<<"\t"<<cnta[5]<<endl;
    }
    if(cnt==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
