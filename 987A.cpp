#include<bits/stdc++.h>
using namespace std;
vector <string> given;
vector <string> input;
vector <string> :: iterator it;
int main()
{
      given.push_back("Time");
      given.push_back("Mind");
      given.push_back("Soul");
      given.push_back("Power");
      given.push_back("Reality");
      given.push_back("Space");
      int n;
      string str;
      cin>>n;
      while(n--)
      {
            cin>>str;
            if(str=="purple")
                  str="Power";
            if(str=="green")
                  str="Time";
            if(str=="blue")
                  str="Space";
            if(str=="orange")
                  str="Soul";
            if(str=="red")
                  str="Reality";
            if(str=="yellow")
                  str="Mind";

            it = find(given.begin(),given.end(),str);
            given.erase(it);
      }
      cout<<given.size()<<endl;
      for(it=given.begin();it!=given.end();it++)
            cout<<*it<<endl;
      return 0;
}
