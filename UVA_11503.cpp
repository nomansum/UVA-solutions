//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
#define endl '\n'

ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}

int parent[100005],weight[100005];

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
              cout<<weight[u]<<"\n";
            }
            else cout<<weight[u]<<"\n";

}
void init(){
  for(int i=0;i<100005;++i){
    weight[i]=1;
    parent[i]=i;
  }
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
         init();
       int n,j=1;
       cin>>n;
       string s,ss;

       unordered_map<string,int> mp;
       for(int i=0;i<n;++i){
           cin>>s>>ss;
           if(mp[s]==0){mp[s]=j;++j;}
           if(mp[ss]==0){mp[ss]=j;++j;} 
           union_find(mp[s],mp[ss]);   

       }


    }
return 0;
      }
