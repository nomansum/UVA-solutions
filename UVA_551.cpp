//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
int main(){
    string s;
    while(getline(cin,s)){
   int n,i,j=-11;
   n=s.size();

   stack<string>st;
    int ans=-1,ch=0;
      for(i=0;i<n;++i){
        if(s[i]==' ')continue;
      if(i+1<n && s[i]=='(' && s[i+1]=='*'){st.push(s.substr(i,2));++i;ch++;}
      else if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')st.push(s.substr(i,1));
       else if(!st.empty() && st.top()=="(*" && i+1<n && s[i]=='*' && s[i+1]==')'){st.pop();++i;ch++;}
       else if(!st.empty() && st.top()=="(" && s[i]==')')st.pop();
       else if(!st.empty() && st.top()=="{" && s[i]=='}')st.pop();
         else if(!st.empty() && st.top()=="[" && s[i]==']')st.pop();
         else if(!st.empty() && st.top()=="<" && s[i]=='>')st.pop();
        else if(((i+1<n && s[i]=='*' && s[i+1]==')')|| s[i]==')' || s[i]=='}' || s[i]==']' || s[i]=='>'))
          {
          ans=i+1;

          break;
        }
     }
  
       if((st.empty() && ans==-1)|| s=="")cout<<"YES\n";
       
       else if(ans==-1)cout<<"NO "<<i+1-ch<<endl;

       else cout<<"NO "<<ans-ch<<endl;  


    } 
  

  return 0;
}
