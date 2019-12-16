//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        string str1,str2;
//        int len1,len2;
//        cin>>str1;
//        cin>>str2;
//        len1 = str1.size();
//        len2 = str2.size();
//        for(int i=0;i<len1;i++)
//        {
//            int position = i;
//            for(int j=i+1;j<len1;j++)
//            {
//                if(str1[j]<=str1[position])
//                    position = j;
//            }
//            if(str1[position]<str1[i])
//            {
//                swap(str1[position],str1[i]);
//                break;
//            }
//        }
//        if(str1<str2)
//            cout<<str1<<endl;
//        else
//            cout<<"---"<<endl;
//    }
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;

string str1,str2;
int len1,len2;

int check(int i)
{
    int position = i;
    for(int j=i+1;j<len1;j++)
    {
        if(str1[j]<=str1[position])
            position = j;
    }
    return position;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str1;
        cin>>str2;
        len1 = str1.size();
        len2 = str2.size();
        for(int i=0;i<len1;i++)
        {
            int position = check(i);
            if(str1[position]<str1[i])
            {
                swap(str1[position],str1[i]);
                break;
            }
        }
        if(str1<str2)
            cout<<str1<<endl;
        else
            cout<<"---"<<endl;
    }
    return 0;
}
