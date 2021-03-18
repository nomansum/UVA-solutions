//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
int main(){
 
string s;
while(getline(cin,s)){
  
  int n;
  n=s.size();
  list<char>li;
  for(int i=0;i<n;++i){
    if(s[i]!='[' && s[i]!=']')li.push_back(s[i]);
        if(s[i]=='['){++i;
          string ss="";
          while(i<n && s[i]!=']'){
            if(s[i]!='['){ss+=s[i];++i;}
            else {--i;break;}
          }
        for(int j=ss.size()-1;j>=0;--j)li.push_front(ss[j]);
        }      
        if(s[i]==']'){++i;
          while(i<n && s[i]!='['){
            if(s[i]!=']'){li.push_back(s[i]);++i;}
            else {break;}
          }
          --i;
        }      
    
              
  }
   for(list<char> :: iterator it=li.begin();it!=li.end();++it)cout<<*it;
    cout<<endl;
   
   
}
  return 0;
}
