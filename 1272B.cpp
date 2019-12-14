#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int left=0,right=0,up=0,down=0,length;
        string str;
        cin>>str;
        length = str.size();
        for(int i=0;i<length;i++)
        {
            if(str[i]=='L')
                left++;
            if(str[i]=='R')
                right++;
            if(str[i]=='U')
                up++;
            if(str[i]=='D')
                down++;
        }
        int ans_up_down,ans_left_right;
        ans_up_down = min(up,down);
        ans_left_right = min(left,right);
        if(ans_left_right==0 || ans_up_down==0)
        {
            if(ans_left_right==0 && ans_up_down!=0)
                ans_up_down=1;
            else if(ans_left_right!=0)
                ans_left_right=1;
        }
        cout<<(ans_left_right+ans_up_down)*2<<endl;
        for(int i=0;i<ans_left_right;i++)
            cout<<"L";
        for(int i=0;i<ans_up_down;i++)
            cout<<"U";
        for(int i=0;i<ans_left_right;i++)
            cout<<"R";
        for(int i=0;i<ans_up_down;i++)
            cout<<"D";
        cout<<endl;
    }
    return 0;
}
