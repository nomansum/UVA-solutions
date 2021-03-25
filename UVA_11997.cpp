//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll unsigned  long long
ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}



int main(){
int n,k;
int t=1;
while(cin>>n){
      
      int i,j,k;

      vector<int>ans(n);

    priority_queue<int>pq;

for(i=0;i<n;++i){
    cin>>ans[i];
  
}

for(i=1;i<n;++i){
  vector< int >tmp(n);
  for(j=0;j<n;++j){
    cin>>tmp[j];
  }
   sort(tmp.begin(),tmp.end());

   for(j=0;j<n;++j)pq.push(ans[j]+tmp[0]);

    for(j=0;j<n;++j){
      for(k=1;k<n;++k){
        if(ans[j]+tmp[k]<pq.top()){
          pq.pop();
          pq.push(ans[j]+tmp[k]);
        }
        else break;
      }
    }
    j=0;
    while(!pq.empty() && j<n){
     
      ans[j]=pq.top();
      pq.pop();
      ++j;
    }


}
    
sort(ans.begin(),ans.end());
for(i=0;i<n;++i)cout<<ans[i]<<" \n"[i==n-1];



}
  return 0;

}
