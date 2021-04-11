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

int parent[500009],weight[500009];

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

int find(int a){
   if(parent[a]==a)return a;
  return parent[a]=find(parent[a]);
}

void union_find(int a,int b){
             int u=find(a);
             int v=find(b);
            if(u!=v){
              if(weight[u]<weight[v])swap(u,v);
              parent[v]=u;
              weight[u]+=weight[v];
              
            }

}
void init(int n){
  for(int i=0;i<=n;++i){
    weight[i]=1;
    parent[i]=i;
  }
}

int main(){
    int t;
    cin>>t;
    while(t--){
             int ans=0;
             int n,k,i,j,l;
               cin>>n>>k;
               init(n);
               for(i=0;i<k;++i){
                cin>>j>>l;
                union_find(j,l);
               }
               for(i=0;i<=n;++i)ans=max(ans,weight[i]);
                cout<<ans<<"\n";

                 
    }              
return 0;
      }


