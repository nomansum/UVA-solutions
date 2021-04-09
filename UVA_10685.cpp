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

int parent[5005],weight[5005];

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
void init(){
  for(int i=0;i<5005;++i){
    weight[i]=1;
    parent[i]=i;
  }
}

int main(){
    
    int n,k;
    while(cin>>n>>k){
      if(n==0)break;
      init();
           string s,ss;
              unordered_map<string,int>mp;
               for(int i=0;i<n;++i){
                          cin>>s;
                          mp[s]=i;
               }
               for(int i=0;i<k;++i){
            cin>>s>>ss;
            union_find(mp[s],mp[ss]);

               }

           int ans=-1;
           for(int i=0;i<5005;++i)ans=max(ans,weight[i]);
           cout<<ans<<"\n";    

                      
    }
          
return 0;
      }
