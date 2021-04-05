//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}


int main(){
int t;
cin>>t;
while(t--){

int n,k;
  set<pair<int,int>> st;
  cin>>n>>k;
  int frq[n],i,j,m;
  vector<string>v;
  string s;
  for(i=0;i<n;++i){
         cin>>s>>j;
         frq[i]=j;
         v.push_back(s);
         st.insert({j,i});
  }  
  for(i=0;i<k;++i){
     auto it=st.begin();
     cout<<it->first<<" "<<v[it->second]<<"\n";
     st.insert({frq[it->second]+it->first,it->second});
   st.erase(it);
  }


}
   return 0;
 }
