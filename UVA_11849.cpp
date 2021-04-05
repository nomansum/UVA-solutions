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
int n,m;
while(cin>>n>>m){
   int j,ans=0;
   if(n==0)break;
   unordered_map<int,int>mp1;
   for(int i=0;i<n;++i){
        cin>>j;
        mp1[j]++;
   }       
for(int i=0;i<m;++i){
  cin>>j;
  mp1[j]++;
  if(mp1[j]>1)ans++;
}

cout<<ans<<"\n";

}
   return 0;
 }
