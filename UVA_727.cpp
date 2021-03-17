//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
int main(){
 
int t;
cin>>t;
map<string,int>mp;
        
mp["*"]=2;
mp["/"]=2;
mp["+"]=1;
mp["-"]=1;
bool fl=true;
string ss;
getline(cin,ss);
getline(cin,ss);
while(t--){
  
   string ch;

   stack<string>st;
   string ans="";
while(getline(cin,ch)){
if(ch=="")break;
 
    if(ch=="(")st.push(ch);
    
    else if(ch==")"){
      while(!st.empty() && st.top()!="(")
      {
        ans+=st.top();
        st.pop();
      }
      if(!st.empty())st.pop();
    }
    else if(ch!="+" && ch!="-" && ch!="*" && ch!="/" && ch!=")")ans+=ch;

    else if(!st.empty() && mp[st.top()]>=mp[ch]){
      while(!st.empty() && mp[ch]<=mp[st.top()]){
        ans+=st.top();
        st.pop();
      }
      st.push(ch);
    }

    else st.push(ch);

}
while(!st.empty()){ans+=st.top();st.pop();}
cout<<ans<<endl;
if(t!=0)cout<<endl;
}

  

  return 0;
}
